#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qstar__f1p00__c__SRC50_SRB_SRL50__qstar__1p0_0p5__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Thu Sep 26 14:40:05 2024) by ROOT version 6.32.02
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
   up__0->Range(725.4264,-2.971215,4564.249,4.9698);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,1188.4,4255.6);
   chist__1->SetMinimum(0.006651);
   chist__1->SetMaximum(36170);
   chist__1->SetDirectory(nullptr);
   chist__1->SetStats(0);
   chist__1->SetLineColor(0);
   chist__1->SetLineWidth(0);
   chist__1->SetMarkerColor(0);
   chist__1->SetMarkerStyle(20);
   chist__1->SetMarkerSize(0);
   chist__1->GetXaxis()->SetTitle("Excited quark mass [GeV]");
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
   
   TLegend *leg = new TLegend(0.540201,0.7826,0.879397,0.9234,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p0","LO prediction, c*, f=1.00","L");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#8c613c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p0","c*, f=1.00","PL");

   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p5","LO prediction, c*, f=0.50","L");

   ci = TColor::GetColor("#dc7ec0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p5","c*, f=0.50","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.74036,0.879397,0.77556,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Observed","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Expected","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7738,"SRC50+SRB+SRL50");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.743,"c*");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6858,"c*, f=1.00 Exp. limit = 3231.4 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6594,"c*, f=1.00 Obs. limit = 3414.3 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.633,"c*, f=0.50 Exp. limit = 2501.1 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6066,"c*, f=0.50 Obs. limit = 2490.5 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p0_fx1[36] = { 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
   2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700,
   3800, 3900, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p0_fy1[36] = { 36170, 15720, 7668, 4019, 2240, 1310, 793.1, 492, 316.6, 208.4, 139.6, 95.51, 65.89, 46.52, 32.89, 23.63, 17.15,
   12.52, 9.169, 6.748, 5.049, 3.779, 2.851, 2.159, 1.635, 1.244, 0.9504, 0.724, 0.5543, 0.4272, 0.3293, 0.254, 0.1972,
   0.1517, 0.1173, 0.09083 };
   TGraph *graph = new TGraph(36,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p0_fx1,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p0_fy1);
   graph->SetName("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#8c613c");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#8c613c");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01","",100,150,4350);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->SetMinimum(0.081747);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->SetMaximum(39786.99);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->SetStats(0);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->SetLineWidth(2);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->SetMarkerStyle(20);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->SetMarkerSize(1.2);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy1p01);
   
   graph->Draw(" l");
   
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fx3001[24] = { 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222,
   3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fy3001[24] = { 9.857761, 8.169911, 6.305205, 4.911267, 3.935045, 3.214285, 2.772966, 2.409863, 2.074418, 1.77963, 1.523668, 1.314128, 1.133406, 0.9812416, 0.856662, 0.714368, 0.6721749,
   0.5966122, 0.5278937, 0.4660907, 0.4111398, 0.3624133, 0.3194472, 0.2822144 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_felx3001[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fely3001[24] = { 2.754698, 2.283038, 1.761955, 1.372427, 1.099627, 0.8982147, 0.7748905, 0.6734232, 0.5796851, 0.4973081, 0.4257807, 0.3672261, 0.3167242, 0.2742027, 0.2393896, 0.1996263, 0.1878357,
   0.1667201, 0.1475171, 0.1302465, 0.1148908, 0.1012744, 0.08926781, 0.0788633 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fehx3001[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fehy3001[24] = { 4.2855, 3.536711, 2.712748, 2.140652, 1.705908, 1.403151, 1.229656, 0.9844282, 0.9119581, 0.7868232, 0.6780509, 0.5806314, 0.5128183, 0.4393445, 0.3816301, 0.390102, 0.312989,
   0.2797659, 0.2496263, 0.221962, 0.1966607, 0.1726488, 0.1568636, 0.1402884 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fx3001,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fy3001,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_felx3001,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fehx3001,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fely3001,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0_fehy3001);
   grae->SetName("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p0");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001","",100,1188.4,4255.6);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->SetMinimum(0.183016);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->SetMaximum(15.53725);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy1p03001);
   
   grae->Draw(" lx");
   
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p0_fx2[24] = { 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222,
   3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p0_fy2[24] = { 5.318736, 5.343951, 9.586295, 10.49994, 5.918554, 3.095973, 2.51989, 1.309487, 1.067758, 1.493328, 2.058353, 2.429378, 1.827008, 1.173957, 0.9623749, 0.7967114, 0.5623588,
   0.4227774, 0.4075418, 0.4473063, 0.3856998, 0.2933351, 0.253041, 0.2591024 };
   graph = new TGraph(24,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p0_fx2,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p0_fy2);
   graph->SetName("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02","",100,1188.4,4255.6);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->SetMinimum(0.2277369);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->SetMaximum(11.52463);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy1p02);
   
   graph->Draw(" plx");
   
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p5_fx3[36] = { 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
   2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700,
   3800, 3900, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p5_fy3[36] = { 9062, 3990, 1951, 1019, 567.8, 331.8, 200.1, 125.6, 81.09, 53.2, 35.71, 24.35, 16.85, 11.77, 8.454, 6.031, 4.353,
   3.182, 2.335, 1.724, 1.279, 0.9645, 0.7244, 0.5456, 0.4122, 0.3143, 0.2388, 0.1827, 0.1396, 0.1068, 0.08219, 0.06303, 0.04851,
   0.03758, 0.02879, 0.02217 };
   graph = new TGraph(36,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p5_fx3,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p5_fy3);
   graph->SetName("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p5");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#dc7ec0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#dc7ec0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53","",100,150,4350);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->SetMinimum(0.019953);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->SetMaximum(9968.198);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->SetStats(0);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->SetLineWidth(2);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->SetMarkerStyle(20);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->SetMarkerSize(1.2);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_xs_fy0p53);
   
   graph->Draw(" l");
   
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fx3002[15] = { 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fy3002[15] = { 7.310748, 6.048887, 4.752626, 3.766175, 3.04951, 2.501849, 2.153581, 1.856361, 1.59777, 1.373016, 1.180747, 1.019425, 0.8803205, 0.7680101, 0.6703982 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_felx3002[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fely3002[15] = { 2.042949, 1.690329, 1.328096, 1.052437, 0.8521691, 0.6991282, 0.6018068, 0.51875, 0.4464882, 0.3836819, 0.3299535, 0.2848727, 0.2460008, 0.2146163, 0.1873392 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fehx3002[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fehy3002[15] = { 3.154394, 2.627592, 2.067269, 1.64722, 1.327121, 1.097196, 0.9269682, 0.8165151, 0.7057733, 0.6107932, 0.5278364, 0.4596973, 0.4016663, 0.3500021, 0.3075716 };
   grae = new TGraphAsymmErrors(15,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fx3002,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fy3002,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_felx3002,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fehx3002,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fely3002,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5_fehy3002);
   grae->SetName("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p5");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002","",100,1288.4,3155.6);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->SetMinimum(0.4347531);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->SetMaximum(11.46335);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_sigma1_fy0p53002);
   
   grae->Draw(" lx");
   
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p5_fx4[15] = { 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000 };
   Double_t tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p5_fy4[15] = { 4.486721, 3.980545, 6.906666, 7.910578, 4.425036, 2.326882, 2.180835, 1.02231, 0.8042563, 1.195088, 1.485582, 2.018461, 1.415724, 0.8075584, 0.7387061 };
   graph = new TGraph(15,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p5_fx4,tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p5_fy4);
   graph->SetName("tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p5");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54","",100,1288.4,3155.6);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->SetMinimum(0.02151893);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->SetMaximum(8.627765);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_fy0p54);
   
   graph->Draw(" plx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,1188.4,4255.6);
   chist_copy__2->SetMinimum(0.006651);
   chist_copy__2->SetMaximum(36170);
   chist_copy__2->SetDirectory(nullptr);
   chist_copy__2->SetStats(0);
   chist_copy__2->SetLineColor(0);
   chist_copy__2->SetLineWidth(0);
   chist_copy__2->SetMarkerColor(0);
   chist_copy__2->SetMarkerStyle(20);
   chist_copy__2->SetMarkerSize(0);
   chist_copy__2->GetXaxis()->SetTitle("Excited quark mass [GeV]");
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
