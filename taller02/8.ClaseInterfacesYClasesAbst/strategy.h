
#pragma once

class Strategy {
 public:
  virtual ~Strategy() {}
  virtual void operation() = 0;
};

class ConcreteStrategyA : public Strategy {
 public:
  ConcreteStrategyA();
  ~ConcreteStrategyA();
  void operation();
};

class ConcreteStrategyB : public Strategy {
 public:
  ConcreteStrategyB();
  ~ConcreteStrategyB();
  void operation();
};

class StrategyClient {
 public:
  StrategyClient(Strategy* strategy);
  ~StrategyClient();
  void setStrategy(Strategy* s);
  void performOperation();
 private:
  Strategy *strategy;
};

