#ifdef __CLING__
#pragma cling optimize(0)
#endif
void real__nontight__hist__lph_pt0__450p0__abslph_etas20__0p00()
{
//=========Macro generated from canvas: c1_n9/
//=========  (Sun May 19 23:40:47 2024) by ROOT version 6.30/02
   TCanvas *c1_n9 = new TCanvas("c1_n9", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n9->SetHighLightColor(2);
   c1_n9->Range(0,0,1,1);
   c1_n9->SetFillColor(0);
   c1_n9->SetBorderMode(0);
   c1_n9->SetBorderSize(2);
   c1_n9->SetTickx(1);
   c1_n9->SetTicky(1);
   c1_n9->SetLeftMargin(0.16);
   c1_n9->SetRightMargin(0.05);
   c1_n9->SetTopMargin(0.05);
   c1_n9->SetBottomMargin(0.16);
   c1_n9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: up
   TPad *up__62 = new TPad("up", "up",0,0,1,1);
   up__62->Draw();
   up__62->cd();
   up__62->Range(-58.11321,-3.18536,92.07547,4.41525);
   up__62->SetFillColor(0);
   up__62->SetFillStyle(4000);
   up__62->SetBorderMode(0);
   up__62->SetBorderSize(0);
   up__62->SetLogy();
   up__62->SetTickx(1);
   up__62->SetTicky(1);
   up__62->SetLeftMargin(0.120603);
   up__62->SetRightMargin(0.08040201);
   up__62->SetTopMargin(0.05181347);
   up__62->SetFrameBorderMode(0);
   up__62->SetFrameBorderMode(0);
   
   TH1D *chist__215 = new TH1D("chist__215","",120,-40,80);
   chist__215->SetMinimum(0.003755789);
   chist__215->SetMaximum(10505.96);
   chist__215->SetDirectory(nullptr);
   chist__215->SetStats(0);
   chist__215->SetLineColor(0);
   chist__215->SetLineWidth(0);
   chist__215->SetMarkerColor(0);
   chist__215->SetMarkerStyle(20);
   chist__215->SetMarkerSize(0);
   chist__215->GetXaxis()->SetTitle("Leading photon E_{T}^{iso} [GeV]");
   chist__215->GetXaxis()->SetNdivisions(4000510);
   chist__215->GetXaxis()->SetLabelFont(42);
   chist__215->GetXaxis()->SetLabelSize(0.04);
   chist__215->GetXaxis()->SetTitleSize(0.04);
   chist__215->GetXaxis()->SetTickLength(0.02);
   chist__215->GetXaxis()->SetTitleOffset(1.010466);
   chist__215->GetXaxis()->SetTitleFont(42);
   chist__215->GetYaxis()->SetTitle("Events / 1.00 GeV");
   chist__215->GetYaxis()->SetNdivisions(3000510);
   chist__215->GetYaxis()->SetLabelFont(42);
   chist__215->GetYaxis()->SetLabelSize(0.04);
   chist__215->GetYaxis()->SetTitleSize(0.04);
   chist__215->GetYaxis()->SetTickLength(0.02);
   chist__215->GetYaxis()->SetTitleOffset(1.454774);
   chist__215->GetYaxis()->SetTitleFont(42);
   chist__215->GetZaxis()->SetLabelFont(42);
   chist__215->GetZaxis()->SetTitleOffset(1);
   chist__215->GetZaxis()->SetTitleFont(42);
   chist__215->Draw("pe");
   TLatex *   tex = new TLatex(0.160804,0.897,"#bf{#it{ATLAS}} #scale[1.0]{Internal}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.853,"#sqrt{s} = 13 TeV, 36.65 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.4698492,0.886,0.879397,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0","Real #gamma","LF");
   entry->SetFillStyle(1001);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"Nontight ID");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.765,"450.0 #leq p_{T}^{leading #gamma} [GeV] < 500.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7342,"0.00 #leq |#eta_{s2}^{leading #gamma}| < 2.37");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216 = new TH1D("th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216","",120,-40,80);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(19,0.1315401);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(20,0.06781182);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(21,0.0125193);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(22,0.7429844);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(23,2.629715);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(24,11.22278);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(25,25.83431);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(26,47.75764);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(27,65.07896);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(28,79.5475);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(29,76.56789);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(30,69.47422);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(31,67.41576);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(32,48.42248);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(33,42.75442);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(34,32.42914);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(35,25.70772);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(36,18.65555);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(37,13.5275);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(38,14.44886);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(39,11.51918);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(40,7.503555);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(41,8.390629);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(42,5.632204);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(43,6.855945);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(44,7.420729);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(45,5.29991);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(46,3.936153);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(47,4.332563);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(48,3.997645);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(49,2.407569);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(50,3.123979);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(51,3.138679);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(52,3.57867);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(53,2.987075);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(54,1.88096);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(55,2.153408);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(56,2.378873);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(57,2.33408);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(58,2.401461);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(59,2.249482);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(60,2.85001);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(61,2.321213);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(62,1.661376);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(63,2.185764);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(64,0.9332634);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(65,1.878296);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(66,1.075773);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(67,1.051038);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(68,1.58922);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(69,1.17054);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(70,1.264381);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(71,0.932642);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(72,0.7881197);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(73,1.003828);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(74,0.6546851);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(75,0.8068237);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(76,0.8909419);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(77,0.8611108);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(78,0.5493343);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(79,0.8773257);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(80,0.8418391);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(81,0.3445908);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(82,0.6807671);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(83,1.026638);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(84,0.576732);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(85,0.5595541);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(86,0.7276122);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(87,0.4235567);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(88,1.171465);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(89,0.8627905);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(90,0.543316);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(91,0.4743408);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(92,0.2029906);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(93,0.1614275);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(94,0.3686725);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(95,0.1722794);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(96,0.1342546);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(97,0.2959302);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(98,0.4404351);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(99,0.2672407);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(100,0.1078389);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(101,0.1468534);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(102,0.2476449);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(103,0.5174095);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(104,0.3635755);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(105,0.2735887);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(106,0.1056385);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(107,0.2297515);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(108,0.440208);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(109,0.266718);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(110,0.2569531);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(111,0.2743394);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(112,0.2144755);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(113,0.1864349);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(114,0.3448746);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(115,0.1778305);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(116,0.04571359);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(117,0.07800932);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(118,0.126397);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(119,0.2490253);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinContent(120,17.91977);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(19,0.1315401);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(20,0.06781182);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(21,0.0125193);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(22,0.3340845);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(23,0.6876587);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(24,1.398446);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(25,2.186249);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(26,3.046398);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(27,3.479868);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(28,3.904267);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(29,3.907362);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(30,3.580904);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(31,3.569023);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(32,2.949182);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(33,2.815291);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(34,2.400913);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(35,2.10664);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(36,1.737534);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(37,1.408053);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(38,1.606005);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(39,1.299968);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(40,1.224511);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(41,1.127426);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(42,0.8882596);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(43,0.8784951);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(44,1.018701);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(45,1.1557);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(46,0.7817524);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(47,1.006683);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(48,0.6884404);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(49,0.4334193);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(50,0.6000871);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(51,0.6309408);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(52,0.6465897);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(53,0.5686445);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(54,0.4693018);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(55,0.4476214);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(56,0.4873461);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(57,0.4917358);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(58,0.6599944);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(59,0.5403649);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(60,0.6818873);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(61,0.9507674);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(62,0.3887922);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(63,0.4647437);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(64,0.2899308);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(65,0.458521);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(66,0.352256);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(67,0.2976117);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(68,0.4140977);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(69,0.4093846);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(70,0.3299159);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(71,0.2715297);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(72,0.2316381);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(73,0.2693732);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(74,0.186436);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(75,0.25629);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(76,0.3169092);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(77,0.2863946);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(78,0.2094927);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(79,0.302652);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(80,0.3437046);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(81,0.1426463);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(82,0.241222);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(83,0.3796739);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(84,0.2765601);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(85,0.1777869);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(86,0.2738657);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(87,0.1730623);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(88,0.3931026);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(89,0.2619988);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(90,0.1855444);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(91,0.1669675);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(92,0.1078318);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(93,0.09127327);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(94,0.1591466);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(95,0.09582088);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(96,0.06946052);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(97,0.1240812);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(98,0.1614644);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(99,0.1225444);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(100,0.09342153);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(101,0.07946364);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(102,0.1370595);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(103,0.1840977);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(104,0.1368763);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(105,0.1326255);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(106,0.072682);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(107,0.1064225);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(108,0.2021555);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(109,0.1459017);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(110,0.110686);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(111,0.1590157);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(112,0.09864338);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(113,0.1040537);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(114,0.1560805);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(115,0.1394862);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(116,0.03635231);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(117,0.06196422);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(118,0.06366261);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(119,0.1122252);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetBinError(120,0.9748721);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetEntries(10574);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetStats(0);

   ci = TColor::GetColor("#4878d0");
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetMarkerColor(ci);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetMarkerStyle(20);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->SetMarkerSize(0.8);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetXaxis()->SetLabelFont(42);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetXaxis()->SetTitleOffset(1);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetXaxis()->SetTitleFont(42);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetYaxis()->SetLabelFont(42);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetYaxis()->SetTitleFont(42);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetZaxis()->SetLabelFont(42);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetZaxis()->SetTitleOffset(1);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->GetZaxis()->SetTitleFont(42);
   th1d__real_photons__Nom__nontight__lph_pt0_6__abslph_etas20_0__lph_caloiso0__216->Draw("SAME hist");
   
   TH1D *chist_copy__217 = new TH1D("chist_copy__217","",120,-40,80);
   chist_copy__217->SetMinimum(0.003755789);
   chist_copy__217->SetMaximum(10505.96);
   chist_copy__217->SetDirectory(nullptr);
   chist_copy__217->SetStats(0);
   chist_copy__217->SetLineColor(0);
   chist_copy__217->SetLineWidth(0);
   chist_copy__217->SetMarkerColor(0);
   chist_copy__217->SetMarkerStyle(20);
   chist_copy__217->SetMarkerSize(0);
   chist_copy__217->GetXaxis()->SetTitle("Leading photon E_{T}^{iso} [GeV]");
   chist_copy__217->GetXaxis()->SetNdivisions(4000510);
   chist_copy__217->GetXaxis()->SetLabelFont(42);
   chist_copy__217->GetXaxis()->SetLabelSize(0.04);
   chist_copy__217->GetXaxis()->SetTitleSize(0.04);
   chist_copy__217->GetXaxis()->SetTickLength(0.02);
   chist_copy__217->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__217->GetXaxis()->SetTitleFont(42);
   chist_copy__217->GetYaxis()->SetTitle("Events / 1.00 GeV");
   chist_copy__217->GetYaxis()->SetNdivisions(3000510);
   chist_copy__217->GetYaxis()->SetLabelFont(42);
   chist_copy__217->GetYaxis()->SetLabelSize(0.04);
   chist_copy__217->GetYaxis()->SetTitleSize(0.04);
   chist_copy__217->GetYaxis()->SetTickLength(0.02);
   chist_copy__217->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__217->GetYaxis()->SetTitleFont(42);
   chist_copy__217->GetZaxis()->SetLabelFont(42);
   chist_copy__217->GetZaxis()->SetTitleOffset(1);
   chist_copy__217->GetZaxis()->SetTitleFont(42);
   chist_copy__217->Draw("sameaxis");
   up__62->Modified();
   c1_n9->cd();
   c1_n9->Modified();
   c1_n9->SetSelected(c1_n9);
}
