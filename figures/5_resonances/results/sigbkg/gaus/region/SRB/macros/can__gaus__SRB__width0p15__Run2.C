#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRB__width0p15__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:50 2024) by ROOT version 6.32.02
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: up
   TPad *up__0 = new TPad("up", "up",0,0,1,1);
   up__0->Draw();
   up__0->cd();
   up__0->Range(-374.3397,-3.268839,8036.226,2.984266);
   up__0->SetFillColor(0);
   up__0->SetFillStyle(4000);
   up__0->SetBorderMode(0);
   up__0->SetBorderSize(0);
   up__0->SetLogy();
   up__0->SetTickx(1);
   up__0->SetTicky(1);
   up__0->SetLeftMargin(0.120603);
   up__0->SetRightMargin(0.08040201);
   up__0->SetTopMargin(0.05181347);
   up__0->SetFrameBorderMode(0);
   up__0->SetFrameBorderMode(0);
   
   TH1D *chist__1 = new TH1D("chist__1","",10,640,7360);
   chist__1->SetMinimum(0.00227233);
   chist__1->SetMaximum(457.3734);
   chist__1->SetDirectory(nullptr);
   chist__1->SetStats(0);
   chist__1->SetLineColor(0);
   chist__1->SetLineWidth(0);
   chist__1->SetMarkerColor(0);
   chist__1->SetMarkerStyle(20);
   chist__1->SetMarkerSize(0);
   chist__1->GetXaxis()->SetTitle("m_{G} [GeV]");
   chist__1->GetXaxis()->SetNdivisions(4000510);
   chist__1->GetXaxis()->SetLabelFont(42);
   chist__1->GetXaxis()->SetLabelSize(0.04);
   chist__1->GetXaxis()->SetTitleSize(0.04);
   chist__1->GetXaxis()->SetTickLength(0.02);
   chist__1->GetXaxis()->SetTitleOffset(1.010466);
   chist__1->GetXaxis()->SetTitleFont(42);
   chist__1->GetYaxis()->SetTitle("#sigma#times BR [fb]");
   chist__1->GetYaxis()->SetNdivisions(3000510);
   chist__1->GetYaxis()->SetLabelFont(42);
   chist__1->GetYaxis()->SetLabelSize(0.04);
   chist__1->GetYaxis()->SetTitleSize(0.04);
   chist__1->GetYaxis()->SetTickLength(0.02);
   chist__1->GetYaxis()->SetTitleOffset(1.454774);
   chist__1->GetYaxis()->SetTitleFont(42);
   chist__1->GetZaxis()->SetLabelFont(42);
   chist__1->GetZaxis()->SetTitleOffset(1);
   chist__1->GetZaxis()->SetTitleFont(42);
   chist__1->Draw("pe");
   TLatex *   tex = new TLatex(0.160804,0.897,"#bf{#it{ATLAS}} #scale[1.0]{Internal}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.853,"#sqrt{s} = 13 TeV, 140.07 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.4861809,0.754,0.879397,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs","Obs. ","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"SRB");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.765,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7298,"Generic gaussians");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.15");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fx3001[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fy3001[28] = { 2.001915, 1.259964, 0.5833117, 0.374046, 0.2742914, 0.2244913, 0.1604392, 0.1070003, 0.07334555, 0.052921, 0.0417059, 0.03190643, 0.02657177, 0.0233255, 0.02132879, 0.01904572, 0.01777106,
   0.01683146, 0.01626591, 0.01559596, 0.01519789, 0.01489852, 0.01466902, 0.01449317, 0.01435303, 0.01413025, 0.01417367, 0.0141123 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_felx3001[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fely3001[28] = { 0.9274356, 0.5837089, 0.2702333, 0.1732859, 0.1270722, 0.104001, 0.07432733, 0.04957047, 0.0339791, 0.02451694, 0.01932127, 0.01478143, 0.01231002, 0.0108061, 0.009881077, 0.00882339, 0.008232873,
   0.007797581, 0.007535577, 0.007225207, 0.007040791, 0.006902101, 0.006795778, 0.006714313, 0.006649388, 0.006546183, 0.006566299, 0.006537864 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fehx3001[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fehy3001[28] = { 1.631131, 0.9397472, 0.4686084, 0.3919442, 0.289308, 0.175741, 0.1099431, 0.09026821, 0.07117798, 0.05794408, 0.04766243, 0.04202444, 0.03755249, 0.03497168, 0.03170515, 0.03055691, 0.02907225,
   0.02813025, 0.027277, 0.02673637, 0.02641354, 0.02598006, 0.02574365, 0.02555606, 0.02541501, 0.02518246, 0.02522359, 0.02514711 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->SetMinimum(0.006816991);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->SetMaximum(3.995594);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3002[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3002[28] = { 2.001915, 1.259964, 0.5833117, 0.374046, 0.2742914, 0.2244913, 0.1604392, 0.1070003, 0.07334555, 0.052921, 0.0417059, 0.03190643, 0.02657177, 0.0233255, 0.02132879, 0.01904572, 0.01777106,
   0.01683146, 0.01626591, 0.01559596, 0.01519789, 0.01489852, 0.01466902, 0.01449317, 0.01435303, 0.01413025, 0.01417367, 0.0141123 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3002[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3002[28] = { 0.5594244, 0.3520902, 0.1630033, 0.1045252, 0.07664928, 0.06273288, 0.04483387, 0.02990066, 0.02049602, 0.01478849, 0.01165449, 0.008916081, 0.007425339, 0.006518186, 0.005960215, 0.005322224, 0.004966027,
   0.004703461, 0.004545421, 0.004358208, 0.004246969, 0.004163311, 0.004099179, 0.004050039, 0.004010877, 0.003948624, 0.003960757, 0.003943606 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3002[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3002[28] = { 0.7453121, 0.4053957, 0.2137424, 0.1888776, 0.1390246, 0.08641794, 0.0366069, 0.03735055, 0.02973799, 0.02152531, 0.0169589, 0.01539829, 0.01342095, 0.01227969, 0.01047893, 0.01011935, 0.009550535,
   0.009175995, 0.008799796, 0.008520852, 0.008329843, 0.00818496, 0.008085224, 0.007988616, 0.007936623, 0.007824525, 0.007847043, 0.007816732 };
   grae = new TGraphAsymmErrors(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetMinimum(0.009151823);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetMaximum(3.020933);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3003[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3003[28] = { 2.001915, 1.259964, 0.5833117, 0.374046, 0.2742914, 0.2244913, 0.1604392, 0.1070003, 0.07334555, 0.052921, 0.0417059, 0.03190643, 0.02657177, 0.0233255, 0.02132879, 0.01904572, 0.01777106,
   0.01683146, 0.01626591, 0.01559596, 0.01519789, 0.01489852, 0.01466902, 0.01449317, 0.01435303, 0.01413025, 0.01417367, 0.0141123 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3003[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3003[28] = { 0.5594244, 0.3520902, 0.1630033, 0.1045252, 0.07664928, 0.06273288, 0.04483387, 0.02990066, 0.02049602, 0.01478849, 0.01165449, 0.008916081, 0.007425339, 0.006518186, 0.005960215, 0.005322224, 0.004966027,
   0.004703461, 0.004545421, 0.004358208, 0.004246969, 0.004163311, 0.004099179, 0.004050039, 0.004010877, 0.003948624, 0.003960757, 0.003943606 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3003[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3003[28] = { 0.7453121, 0.4053957, 0.2137424, 0.1888776, 0.1390246, 0.08641794, 0.0366069, 0.03735055, 0.02973799, 0.02152531, 0.0169589, 0.01539829, 0.01342095, 0.01227969, 0.01047893, 0.01011935, 0.009550535,
   0.009175995, 0.008799796, 0.008520852, 0.008329843, 0.00818496, 0.008085224, 0.007988616, 0.007936623, 0.007824525, 0.007847043, 0.007816732 };
   grae = new TGraphAsymmErrors(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetMinimum(0.009151823);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetMaximum(3.020933);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fx1[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fy1[28] = { 1.557401, 1.47315, 0.570798, 0.2878938, 0.246479, 0.2795095, 0.2061042, 0.1145121, 0.08361584, 0.05335686, 0.03924939, 0.02872128, 0.02425728, 0.02085869, 0.01841586, 0.01688421, 0.01609473,
   0.01530491, 0.01504085, 0.01467747, 0.01443762, 0.01417532, 0.01412433, 0.01404809, 0.01400067, 0.0139106, 0.01392086, 0.01392508 };
   TGraph *graph = new TGraph(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fx1,tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->SetMinimum(0.01251954);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->SetMaximum(1.71175);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.00227233);
   chist_copy__2->SetMaximum(457.3734);
   chist_copy__2->SetDirectory(nullptr);
   chist_copy__2->SetStats(0);
   chist_copy__2->SetLineColor(0);
   chist_copy__2->SetLineWidth(0);
   chist_copy__2->SetMarkerColor(0);
   chist_copy__2->SetMarkerStyle(20);
   chist_copy__2->SetMarkerSize(0);
   chist_copy__2->GetXaxis()->SetTitle("m_{G} [GeV]");
   chist_copy__2->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2->GetXaxis()->SetLabelFont(42);
   chist_copy__2->GetXaxis()->SetLabelSize(0.04);
   chist_copy__2->GetXaxis()->SetTitleSize(0.04);
   chist_copy__2->GetXaxis()->SetTickLength(0.02);
   chist_copy__2->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__2->GetXaxis()->SetTitleFont(42);
   chist_copy__2->GetYaxis()->SetTitle("#sigma#times BR [fb]");
   chist_copy__2->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2->GetYaxis()->SetLabelFont(42);
   chist_copy__2->GetYaxis()->SetLabelSize(0.04);
   chist_copy__2->GetYaxis()->SetTitleSize(0.04);
   chist_copy__2->GetYaxis()->SetTickLength(0.02);
   chist_copy__2->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__2->GetYaxis()->SetTitleFont(42);
   chist_copy__2->GetZaxis()->SetLabelFont(42);
   chist_copy__2->GetZaxis()->SetTitleOffset(1);
   chist_copy__2->GetZaxis()->SetTitleFont(42);
   chist_copy__2->Draw("sameaxis");
   up__0->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
