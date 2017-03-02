#pragma once

class DecisionTree {
 public:
  DecisionTree();
  ~DecisionTree();
 
  bool LoadSample(const std::string& sample_file);
  bool Train();
 
  void Predict();
 private:
};
