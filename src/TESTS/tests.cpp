#include "tests.h"

namespace s21
{
TEST(test_centerig_figure, test_one) {
  s21::Model &a = s21::Model::GetInstanceModel();
  Controller b(&a);
  std::vector<std::vector<double>> answer = { {-0.5, -0.5, -0.5}, 
{-0.5, -0.5, 0.5}, 
{-0.5, 0.5, -0.5}, 
{-0.5, 0.5, 0.5}, 
{0.5, -0.5, -0.5}, 
{0.5, -0.5, 0.5}, 
{0.5, 0.5, -0.5}, 
{0.5, 0.5, 0.5 }};
  a.OpenObjFile("../cube.obj");
  std::vector<std::vector<double>> res = a.getMatrixVertexes();

  EXPECT_EQ(answer.size(), res.size());
  for (size_t i = 0; i < answer.size(); ++i) {
    EXPECT_EQ(answer[i].size(), res[i].size());
  }

  std::vector<std::vector<double>>::iterator it_a = answer.begin();
  std::vector<std::vector<double>>::iterator it_r = a.begin();
  while (it_a != answer.end() && it_r != a.end()) {
    EXPECT_EQ(*it_a, *it_r);
    ++it_r;
    ++it_a;
  }
}

TEST(test_rotate_figure, test_one_x) {
  s21::Model &a = s21::Model::GetInstanceModel();
  Controller b(&a);
  std::vector<std::vector<double>> answer = { {-0.5, -0.447585, -0.547419},
{-0.5, -0.547419, 0.447585},
{-0.5, 0.547419, -0.447585 },
{-0.5, 0.447585, 0.547419 },
{0.5, -0.447585, -0.547419 },
{0.5, -0.547419, 0.447585 },
{0.5, 0.547419, -0.447585 },
{0.5, 0.447585, 0.547419 }};
  a.OpenObjFile("../cube.obj");
  a.RotationByXYZ(0.1, s21::move::X);
  std::vector<std::vector<double>> res = a.getMatrixVertexes();

  EXPECT_EQ(answer.size(), res.size());
  for (size_t i = 0; i < answer.size(); ++i) {
    EXPECT_EQ(answer[i].size(), res[i].size());
  }

  std::vector<std::vector<double>>::iterator it_a = answer.begin();
  std::vector<std::vector<double>>::iterator it_r = a.begin();
  while (it_a != answer.end() && it_r != a.end()) {
    EXPECT_EQ(*it_a, *it_r);
    ++it_r;
    ++it_a;
  }
}


TEST(test_rotate_figure, test_two_y) {
  s21::Model &a = s21::Model::GetInstanceModel();
  Controller b(&a);
  std::vector<std::vector<double>> answer = { {-0.547419, -0.5, -0.447585 },
{-0.447585, -0.5, 0.547419 },
{-0.547419, 0.5, -0.447585 },
{-0.447585, 0.5, 0.547419 },
{0.447585, -0.5, -0.547419 },
{0.547419, -0.5, 0.447585 },
{0.447585, 0.5, -0.547419} ,
{0.547419, 0.5, 0.447585 },}
  a.OpenObjFile("../cube.obj");
  a.RotationByXYZ(0.1, s21::move::Y);
  std::vector<std::vector<double>> res = a.getMatrixVertexes();

  EXPECT_EQ(answer.size(), res.size());
  for (size_t i = 0; i < answer.size(); ++i) {
    EXPECT_EQ(answer[i].size(), res[i].size());
  }

  std::vector<std::vector<double>>::iterator it_a = answer.begin();
  std::vector<std::vector<double>>::iterator it_r = a.begin();
  while (it_a != answer.end() && it_r != a.end()) {
    EXPECT_EQ(*it_a, *it_r);
    ++it_r;
    ++it_a;
  }
}

TEST(test_rotate_figure, test_three_z) {
  s21::Model &a = s21::Model::GetInstanceModel();
  Controller b(&a);
  std::vector<std::vector<double>> answer ={{ -0.447585 -0.547419 -0.5}, 
{-0.447585 -0.547419 0.5 },
{-0.547419 0.447585 -0.5 },
{-0.547419 0.447585 0.5 },
{0.547419 -0.447585 -0.5 },
{0.547419 -0.447585 0.5 },
{0.447585 0.547419 -0.5 },
{0.447585 0.547419 0.5},}
  a.OpenObjFile("../cube.obj");
  a.RotationByXYZ(0.1, s21::move::Z);
  std::vector<std::vector<double>> res = a.getMatrixVertexes();

  EXPECT_EQ(answer.size(), res.size());
  for (size_t i = 0; i < answer.size(); ++i) {
    EXPECT_EQ(answer[i].size(), res[i].size());
  }

  std::vector<std::vector<double>>::iterator it_a = answer.begin();
  std::vector<std::vector<double>>::iterator it_r = a.begin();
  while (it_a != answer.end() && it_r != a.end()) {
    EXPECT_EQ(*it_a, *it_r);
    ++it_r;
    ++it_a;
  }
}

TEST(test_move_figure, test_one_x) {
  s21::Model &a = s21::Model::GetInstanceModel();
  Controller b(&a);
  std::vector<std::vector<double>> answer = { {-0.4, -0.5, -0.5}, 
{-0.4, -0.5, 0.5}, 
{-0.4, 0.5, -0.5}, 
{-0.4, 0.5, 0.5}, 
{0.6, -0.5, -0.5}, 
{0.6, -0.5, 0.5}, 
{0.6, 0.5, -0.5}, 
{0.6, 0.5, 0.5 }};
  a.OpenObjFile("../cube.obj");
  a.MoveFigureXYZ(0.1, s21::move::X);
  std::vector<std::vector<double>> res = a.getMatrixVertexes();

  EXPECT_EQ(answer.size(), res.size());
  for (size_t i = 0; i < answer.size(); ++i) {
    EXPECT_EQ(answer[i].size(), res[i].size());
  }

  std::vector<std::vector<double>>::iterator it_a = answer.begin();
  std::vector<std::vector<double>>::iterator it_r = a.begin();
  while (it_a != answer.end() && it_r != a.end()) {
    EXPECT_EQ(*it_a, *it_r);
    ++it_r;
    ++it_a;
  }
}


TEST(test_move_figure, test_one_y) {
  s21::Model &a = s21::Model::GetInstanceModel();
  Controller b(&a);
  std::vector<std::vector<double>> answer = { {-0.5, -0.4, -0.5}, 
{-0.5, -0.4, 0.5}, 
{-0.5, 0.6, -0.5}, 
{-0.5, 0.6, 0.5}, 
{0.5, -0.4, -0.5}, 
{0.5, -0.4, 0.5}, 
{0.5, 0.6, -0.5}, 
{0.5, 0.6, 0.5 }};
  a.OpenObjFile("../cube.obj");
  a.MoveFigureXYZ(0.1, s21::move::Y);
  std::vector<std::vector<double>> res = a.getMatrixVertexes();

  EXPECT_EQ(answer.size(), res.size());
  for (size_t i = 0; i < answer.size(); ++i) {
    EXPECT_EQ(answer[i].size(), res[i].size());
  }

  std::vector<std::vector<double>>::iterator it_a = answer.begin();
  std::vector<std::vector<double>>::iterator it_r = a.begin();
  while (it_a != answer.end() && it_r != a.end()) {
    EXPECT_EQ(*it_a, *it_r);
    ++it_r;
    ++it_a;
  }
}

TEST(test_move_figure, test_one_z) {
  s21::Model &a = s21::Model::GetInstanceModel();
  Controller b(&a);
  std::vector<std::vector<double>> answer = { {-0.5, -0.5, -0.4}, 
{-0.5, -0.5, 0.6}, 
{-0.5, 0.5, -0.4}, 
{-0.5, 0.5, 0.6}, 
{0.5, -0.5, -0.4}, 
{0.5, -0.5, 0.6}, 
{0.5, 0.5, -0.4}, 
{0.5, 0.5, 0.6 }};
  a.OpenObjFile("../cube.obj");
  a.MoveFigureXYZ(0.1, s21::move::Y);
  std::vector<std::vector<double>> res = a.getMatrixVertexes();

  EXPECT_EQ(answer.size(), res.size());
  for (size_t i = 0; i < answer.size(); ++i) {
    EXPECT_EQ(answer[i].size(), res[i].size());
  }

  std::vector<std::vector<double>>::iterator it_a = answer.begin();
  std::vector<std::vector<double>>::iterator it_r = a.begin();
  while (it_a != answer.end() && it_r != a.end()) {
    EXPECT_EQ(*it_a, *it_r);
    ++it_r;
    ++it_a;
  }
}
}  // namespace s21

