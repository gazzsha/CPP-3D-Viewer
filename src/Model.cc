#include "Model.h"

namespace s21
{
  void Model::OpenObjFile(std::string file_name) {
  std::ifstream inputFile("cube.obj");
  std::string line;
  std::istringstream input;

  if (inputFile.is_open()) {
    while (std::getline(inputFile, line)) {
    ParsingObjFile(line);
    //std::cout << line << "\n";
    }
  }
//     if (!flag_err) {
//       figure_centering(matrix);
//       increase_reduction_figure(matrix, 0.5);
//       free(str);
//     }
//   } else {
//     return_status = FAILURE;
//   }
//   if (return_status == SUCCESS && flag_err) return_status = FAILURE;
//   return return_status;
}

void Model::ParsingObjFile(std::string str) {

  switch (str[0]) {
    case 'v':
        validtion_vexters.Validation(str);
        matrix_.push_back(filler_verters.Fill(str));    
      break;

    case 'f':
        validtion_facets.Validation(str);
        polygon_.push_back(filler_facets.Fill(str));      
      break;
    case '\0': break;
    default:
      throw std::runtime_error("Wrong data!");
      break;
  }
}

bool Model::IsNumber(char c) {
    return c >= '0' && c <= '9';
}


void ValidatorVexters::Validation(const std::string& str) const {
    auto i = 1;
    while (str[i] != '\0' && str[i] != '\n') {
    if (str[i] == '.' || str[i] == '-' || Model::IsNumber(str[i]) || (str[i] == ' ')) ++i;
    else throw std::runtime_error("Wrong data!");
    }
}

void ValidatorFacets::Validation(const std::string& str) const  {
    auto i = 1;
    while (str[i] != '\0' && str[i] != '\n') {
    if (Model::IsNumber(str[i]) || (str[i] == ' ') || (str[i] == '/'))  ++i;
    else throw std::runtime_error("Wrong data!");
    }
}

std::vector<double> FillerVexters::Fill(const std::string& str) const {
    auto i = 1;
    std::string number;
    std::vector<double> values;
    while (str[i] != '\0' && str[i] != '\n') {
    if (str[i] == '.' || str[i] == '-' || Model::IsNumber(str[i])) { number.push_back(str[i]); ++i; }
    else {
      if (!number.empty()) values.push_back(std::stod(number));
      number.clear();
      while (str[i] == ' ') i++;
    }
    }
    if (!number.empty()) {
        number.push_back(str[i]);
        values.push_back(std::stod(number));
    }
    return values; 
}

std::vector<double> FillerFacets::Fill(const std::string& str) const {
    auto i = 1;
    std::string number;
    std::vector<double> values;
    while (str[i] != '\0' && str[i] != '\n') {
    if (Model::IsNumber(str[i]) || (str[i] == ' ')) { number.push_back(str[i]); ++i; }
    else if(str[i] == '/') {
        while (str[i] != ' ' && Model::IsNumber(str[i + 1])) ++i;
        ++i;
        if (!number.empty()) values.push_back(std::stod(number));
        number.clear();
    }
    }
    return values;
}


} // namespace s21
