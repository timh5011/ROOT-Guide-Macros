// simple function and histogram

{

f1 = new TF1("f1", "exp([0]+[1]*x)", 0., 5.);
f1->SetParameter(1,-1);
//f1->Draw();

h1 = new TH1F("h1","f1 histogram", 100, 0., 5.);
for (int i = 0; i<1000;i++) {
  h1->Fill(f1->GetRandom());
}
h1->Draw();
}
