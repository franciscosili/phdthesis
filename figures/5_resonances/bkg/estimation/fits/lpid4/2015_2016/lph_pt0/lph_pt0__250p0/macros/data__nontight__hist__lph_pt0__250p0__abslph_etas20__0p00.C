#ifdef __CLING__
#pragma cling optimize(0)
#endif
void data__nontight__hist__lph_pt0__250p0__abslph_etas20__0p00()
{
//=========Macro generated from canvas: c1_n16/
//=========  (Sun May 19 23:40:30 2024) by ROOT version 6.30/02
   TCanvas *c1_n16 = new TCanvas("c1_n16", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n16->SetHighLightColor(2);
   c1_n16->Range(0,0,1,1);
   c1_n16->SetFillColor(0);
   c1_n16->SetBorderMode(0);
   c1_n16->SetBorderSize(2);
   c1_n16->SetTickx(1);
   c1_n16->SetTicky(1);
   c1_n16->SetLeftMargin(0.16);
   c1_n16->SetRightMargin(0.05);
   c1_n16->SetTopMargin(0.05);
   c1_n16->SetBottomMargin(0.16);
   c1_n16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: up
   TPad *up__26 = new TPad("up", "up",0,0,1,1);
   up__26->Draw();
   up__26->cd();
   up__26->Range(-58.11321,-1.255507,92.07547,6.070771);
   up__26->SetFillColor(0);
   up__26->SetFillStyle(4000);
   up__26->SetBorderMode(0);
   up__26->SetBorderSize(0);
   up__26->SetLogy();
   up__26->SetTickx(1);
   up__26->SetTicky(1);
   up__26->SetLeftMargin(0.120603);
   up__26->SetRightMargin(0.08040201);
   up__26->SetTopMargin(0.05181347);
   up__26->SetFrameBorderMode(0);
   up__26->SetFrameBorderMode(0);
   
   TH1D *chist__91 = new TH1D("chist__91","",120,-40,80);
   chist__91->SetMinimum(0.3);
   chist__91->SetMaximum(491101.7);
   chist__91->SetDirectory(nullptr);
   chist__91->SetStats(0);
   chist__91->SetLineColor(0);
   chist__91->SetLineWidth(0);
   chist__91->SetMarkerColor(0);
   chist__91->SetMarkerStyle(20);
   chist__91->SetMarkerSize(0);
   chist__91->GetXaxis()->SetTitle("Leading photon E_{T}^{iso} [GeV]");
   chist__91->GetXaxis()->SetNdivisions(4000510);
   chist__91->GetXaxis()->SetLabelFont(42);
   chist__91->GetXaxis()->SetLabelSize(0.04);
   chist__91->GetXaxis()->SetTitleSize(0.04);
   chist__91->GetXaxis()->SetTickLength(0.02);
   chist__91->GetXaxis()->SetTitleOffset(1.010466);
   chist__91->GetXaxis()->SetTitleFont(42);
   chist__91->GetYaxis()->SetTitle("Events / 1.00 GeV");
   chist__91->GetYaxis()->SetNdivisions(3000510);
   chist__91->GetYaxis()->SetLabelFont(42);
   chist__91->GetYaxis()->SetLabelSize(0.04);
   chist__91->GetYaxis()->SetTitleSize(0.04);
   chist__91->GetYaxis()->SetTickLength(0.02);
   chist__91->GetYaxis()->SetTitleOffset(1.454774);
   chist__91->GetYaxis()->SetTitleFont(42);
   chist__91->GetZaxis()->SetLabelFont(42);
   chist__91->GetZaxis()->SetTitleOffset(1);
   chist__91->GetZaxis()->SetTitleFont(42);
   chist__91->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0","Fake #gamma","LF");
   entry->SetFillStyle(1001);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
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
      tex = new TLatex(0.160804,0.765,"250.0 #leq p_{T}^{leading #gamma} [GeV] < 300.0");
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
   
   TH1D *th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92 = new TH1D("th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92","",120,-40,80);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(25,1);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(26,1);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(27,8);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(28,22);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(29,99);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(30,283);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(31,624);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(32,981);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(33,1378);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(34,1675);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(35,2043);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(36,2251);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(37,2608);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(38,2950);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(39,3342);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(40,3489);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(41,3607);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(42,3839);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(43,3772);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(44,3826);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(45,3643);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(46,3518);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(47,3412);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(48,3146);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(49,2972);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(50,2700);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(51,2608);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(52,2393);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(53,2175);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(54,2033);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(55,1821);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(56,1668);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(57,1520);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(58,1393);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(59,1283);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(60,1123);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(61,1040);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(62,921);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(63,865);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(64,799);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(65,661);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(66,594);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(67,590);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(68,503);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(69,489);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(70,427);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(71,369);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(72,363);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(73,312);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(74,315);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(75,257);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(76,262);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(77,228);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(78,207);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(79,195);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(80,196);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(81,170);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(82,178);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(83,148);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(84,140);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(85,129);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(86,127);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(87,121);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(88,117);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(89,99);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(90,109);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(91,87);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(92,74);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(93,97);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(94,76);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(95,70);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(96,62);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(97,62);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(98,80);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(99,57);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(100,58);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(101,55);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(102,52);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(103,60);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(104,44);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(105,54);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(106,42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(107,42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(108,46);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(109,41);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(110,34);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(111,37);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(112,35);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(113,34);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(114,30);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(115,41);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(116,31);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(117,21);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(118,37);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(119,39);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinContent(120,965);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(25,1);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(26,1);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(27,2.828427);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(28,4.690416);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(29,9.949874);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(30,16.8226);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(31,24.97999);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(32,31.32092);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(33,37.12142);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(34,40.92676);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(35,45.19956);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(36,47.4447);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(37,51.06858);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(38,54.3139);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(39,57.81003);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(40,59.06776);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(41,60.05831);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(42,61.95966);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(43,61.41661);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(44,61.85467);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(45,60.35727);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(46,59.31273);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(47,58.41233);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(48,56.08921);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(49,54.51605);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(50,51.96152);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(51,51.06858);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(52,48.9183);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(53,46.6369);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(54,45.0888);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(55,42.67318);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(56,40.84116);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(57,38.98718);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(58,37.32292);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(59,35.81899);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(60,33.51119);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(61,32.24903);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(62,30.34798);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(63,29.41088);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(64,28.26659);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(65,25.70992);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(66,24.37212);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(67,24.28992);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(68,22.42766);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(69,22.11334);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(70,20.66398);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(71,19.20937);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(72,19.05256);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(73,17.66352);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(74,17.74824);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(75,16.03122);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(76,16.18641);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(77,15.09967);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(78,14.38749);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(79,13.96424);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(80,14);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(81,13.0384);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(82,13.34166);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(83,12.16553);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(84,11.83216);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(85,11.35782);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(86,11.26943);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(87,11);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(88,10.81665);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(89,9.949874);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(90,10.44031);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(91,9.327379);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(92,8.602325);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(93,9.848858);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(94,8.717798);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(95,8.3666);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(96,7.874008);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(97,7.874008);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(98,8.944272);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(99,7.549834);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(100,7.615773);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(101,7.416198);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(102,7.211103);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(103,7.745967);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(104,6.63325);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(105,7.348469);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(106,6.480741);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(107,6.480741);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(108,6.78233);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(109,6.403124);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(110,5.830952);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(111,6.082763);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(112,5.91608);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(113,5.830952);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(114,5.477226);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(115,6.403124);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(116,5.567764);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(117,4.582576);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(118,6.082763);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(119,6.244998);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetBinError(120,31.06445);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetEntries(87609);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetMarkerColor(ci);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetMarkerStyle(20);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->SetMarkerSize(0.8);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetXaxis()->SetLabelFont(42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetXaxis()->SetTitleOffset(1);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetXaxis()->SetTitleFont(42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetYaxis()->SetLabelFont(42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetYaxis()->SetTitleFont(42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetZaxis()->SetLabelFont(42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetZaxis()->SetTitleOffset(1);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->GetZaxis()->SetTitleFont(42);
   th1d__data__Nom__nontight__lph_pt0_2__abslph_etas20_0__lph_caloiso0__92->Draw("SAME hist");
   
   TH1D *chist_copy__93 = new TH1D("chist_copy__93","",120,-40,80);
   chist_copy__93->SetMinimum(0.3);
   chist_copy__93->SetMaximum(491101.7);
   chist_copy__93->SetDirectory(nullptr);
   chist_copy__93->SetStats(0);
   chist_copy__93->SetLineColor(0);
   chist_copy__93->SetLineWidth(0);
   chist_copy__93->SetMarkerColor(0);
   chist_copy__93->SetMarkerStyle(20);
   chist_copy__93->SetMarkerSize(0);
   chist_copy__93->GetXaxis()->SetTitle("Leading photon E_{T}^{iso} [GeV]");
   chist_copy__93->GetXaxis()->SetNdivisions(4000510);
   chist_copy__93->GetXaxis()->SetLabelFont(42);
   chist_copy__93->GetXaxis()->SetLabelSize(0.04);
   chist_copy__93->GetXaxis()->SetTitleSize(0.04);
   chist_copy__93->GetXaxis()->SetTickLength(0.02);
   chist_copy__93->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__93->GetXaxis()->SetTitleFont(42);
   chist_copy__93->GetYaxis()->SetTitle("Events / 1.00 GeV");
   chist_copy__93->GetYaxis()->SetNdivisions(3000510);
   chist_copy__93->GetYaxis()->SetLabelFont(42);
   chist_copy__93->GetYaxis()->SetLabelSize(0.04);
   chist_copy__93->GetYaxis()->SetTitleSize(0.04);
   chist_copy__93->GetYaxis()->SetTickLength(0.02);
   chist_copy__93->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__93->GetYaxis()->SetTitleFont(42);
   chist_copy__93->GetZaxis()->SetLabelFont(42);
   chist_copy__93->GetZaxis()->SetTitleOffset(1);
   chist_copy__93->GetZaxis()->SetTitleFont(42);
   chist_copy__93->Draw("sameaxis");
   up__26->Modified();
   c1_n16->cd();
   c1_n16->Modified();
   c1_n16->SetSelected(c1_n16);
}
