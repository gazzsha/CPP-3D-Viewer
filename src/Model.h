#ifndef S21_CPP4_3DVIEWER_V2_MODEL_H
#define S21_CPP4_3DVIEWER_V2_MODEL_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <exception>

namespace s21
{
enum type {
  VERTEXES,
  FACETS,
};

enum move {
  X,
  Y,
  Z,
};


typedef struct min_max {
  std::vector<double> x_min_max;
  std::vector<double> y_min_max;
  std::vector<double> z_min_max;
} min_max_t;

class ValidatorAbstract {
public:
    virtual void Validation(const std::string&) const = 0;    
};

class ValidatorVexters : public ValidatorAbstract {
public:
    void Validation(const std::string&) const override;
};

class ValidatorFacets : public ValidatorAbstract {
public:
    void Validation(const std::string&) const override;
};

class FillerAbstract {
    public:
    virtual std::vector<double> Fill(const std::string& str) const = 0;
};

class FillerVexters : FillerAbstract {
public:
    std::vector<double> Fill(const std::string& str) const override;
};

class FillerFacets : FillerAbstract {
public:
    std::vector<double> Fill(const std::string& str) const override;
};
class Model {
private:
using Matrix = std::vector<std::vector<double>>;

  Model() {}
  Model(const Model&) = delete;
  Model& operator=(const Model&) = delete;

  Matrix matrix_;
  Matrix polygon_;
  min_max_t min_max_values;

public: 
    void OpenObjFile(std::string file_name);
    void ParsingObjFile(std::string str);
    static bool IsNumber(char c);
    ValidatorVexters validtion_vexters;
    ValidatorFacets validtion_facets;
    FillerVexters filler_verters;
    FillerFacets filler_facets;
    static Model& GetInstanceModel() {
    static Model model_;
    return model_;
  }

        void print() { 
        for (int i = 0; i < matrix_.size(); ++i) { 
            for (int j = 0; j < matrix_[i].size(); ++j) { 
                std::cout << matrix_[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
            void printt() { 
        for (int i = 0; i < polygon_.size(); ++i) { 
            for (int j = 0; j < polygon_[i].size(); ++j) { 
                std::cout << polygon_[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};    
} // namespace s21


#endif //S21_CPP4_3DVIEWER_V2_MODEL_H


