
#include "strategy.h"
#include <iostream>

using namespace std;

ConcreteStrategyA::ConcreteStrategyA() {}

ConcreteStrategyA::~ConcreteStrategyA() {}

void ConcreteStrategyA::operation() {
  cout << "Hello strategy A" << endl;
}

ConcreteStrategyB::ConcreteStrategyB() {}

ConcreteStrategyB::~ConcreteStrategyB() {}

void ConcreteStrategyB::operation() {
  cout << "Hello strategy B" << endl;
}

StrategyClient::StrategyClient(Strategy* strategy) :
  strategy(strategy)
{}

StrategyClient::~StrategyClient() {
  try {
    delete strategy;
  }
  catch(...) {}
}

void StrategyClient::setStrategy(Strategy* s) {
  strategy = s;
}

void StrategyClient::performOperation() {
  strategy->operation();
}

