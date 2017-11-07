
#pragma once

class Difusor {
 public:
  Difusor(float anguloDifusion);
  virtual ~Difusor();
  float obtAnguloDifusion() const;
  virtual bool potenciaDifusion(float potencia) = 0;
  void estAnguloDifusion(float anguloDifusion);
 private:
  float anguloDifusion;
};

class DifusorCentral : public Difusor {
 public:
  DifusorCentral(float anguloDifusion, float difusorCentral);
  ~DifusorCentral();
  void establecerDifusorCentral(float difusorCentral);
  bool potenciaDifusion(float potencia);
 private:
  float difusorCentral;
};

class DifusorBivalente : public Difusor {
 public:
  DifusorBivalente(float anguloDifusion, float anguloPos);
  virtual ~DifusorBivalente();
  virtual void estAnguloPost(float anguloPost);
  virtual float obtAnguloPost() const;
 private:
  float anguloPos;
};

class DifusorBivalenteCentral : public DifusorBivalente {
 public:
  DifusorBivalenteCentral(float anguloDifusion, float anguloPos, float difusorBiC);
  ~DifusorBivalenteCentral();
  bool potenciaDifusion(float potencia);
  void establecerDifusorBiC(float difusorBiC);
 private:
  float difusorBiC;
};
