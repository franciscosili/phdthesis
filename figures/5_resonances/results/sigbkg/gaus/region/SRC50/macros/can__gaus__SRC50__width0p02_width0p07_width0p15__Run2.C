#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRC50__width0p02_width0p07_width0p15__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:24:37 2024) by ROOT version 6.32.02
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
   up__0->Range(-374.3397,-3.107336,8036.226,2.687079);
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
   chist__1->SetMinimum(0.002965553);
   chist__1->SetMaximum(243.6969);
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
   
   TLegend *leg = new TLegend(0.540201,0.8178,0.879397,0.9234,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs","#sigma_{G}/m_{G}=0.02","PL");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs","#sigma_{G}/m_{G}=0.07","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs","#sigma_{G}/m_{G}=0.15","PL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.77556,0.879397,0.81076,NULL,"brNDC");
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
      tex = new TLatex(0.160804,0.809,"SRC50");
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
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3001[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3001[29] = { 0.8164591, 0.5650953, 0.4095534, 0.3081763, 0.2352097, 0.179719, 0.1389411, 0.1100019, 0.086843, 0.06966374, 0.05642008, 0.04608348, 0.03833544, 0.03205648, 0.02741685, 0.02379441, 0.02102126,
   0.01894352, 0.01748014, 0.0163741, 0.01553102, 0.01493937, 0.01454422, 0.01426356, 0.01404706, 0.01391529, 0.0138412, 0.01376031, 0.01371883 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3001[29] = { 0.2281551, 0.1579129, 0.1144475, 0.08611821, 0.06572808, 0.05022151, 0.03882634, 0.03073945, 0.02426781, 0.01946716, 0.01576629, 0.01287778, 0.01071263, 0.008958011, 0.00766149, 0.006649221, 0.005874277,
   0.005293665, 0.004884732, 0.004575653, 0.004340059, 0.004174728, 0.004064304, 0.003985874, 0.003925375, 0.003888554, 0.003867849, 0.003845245, 0.003833653 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3001[29] = { 0.3142573, 0.2234769, 0.1612454, 0.1235598, 0.09498546, 0.07383116, 0.05912286, 0.04631406, 0.03670938, 0.03029571, 0.02521121, 0.02109876, 0.01807696, 0.01558992, 0.0136226, 0.01225133, 0.01111798,
   0.01024797, 0.009564646, 0.008997873, 0.0085955, 0.008302355, 0.008107595, 0.007924993, 0.00780087, 0.00772359, 0.007678055, 0.007649978, 0.007623804 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->SetMinimum(0.008896658);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->SetMaximum(1.2428);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx1[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy1[29] = { 0.9072906, 0.4217105, 0.4345653, 0.4016608, 0.1715572, 0.1549278, 0.1298564, 0.1495244, 0.08629203, 0.05493229, 0.04790922, 0.02932806, 0.05927906, 0.03257054, 0.02709482, 0.02309875, 0.01594141,
   0.0258554, 0.02782621, 0.01795036, 0.01433541, 0.01408004, 0.01395343, 0.01393519, 0.01384823, 0.01379141, 0.01378911, 0.01376426, 0.01372465 };
   TGraph *graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetMinimum(0.01235218);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetMaximum(0.9966472);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fx3002[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fy3002[29] = { 2.690848, 1.449118, 1.013024, 0.7139013, 0.5368932, 0.3911719, 0.3071325, 0.2380894, 0.1725129, 0.1382937, 0.108912, 0.08585875, 0.06863276, 0.0552912, 0.04465388, 0.03669173, 0.03061314,
   0.02584505, 0.02253835, 0.0199099, 0.0183269, 0.01710087, 0.01625806, 0.01547242, 0.01503567, 0.01467214, 0.01439869, 0.01424833, 0.01409388 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_felx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fely3002[29] = { 0.7519432, 0.4049481, 0.2830841, 0.1994959, 0.1500319, 0.1093109, 0.08582654, 0.06653281, 0.04820781, 0.03864543, 0.03043486, 0.02399276, 0.01917905, 0.01545083, 0.01247829, 0.01025331, 0.008554676,
   0.00722226, 0.00629822, 0.005563714, 0.005121354, 0.004778746, 0.004543226, 0.004323683, 0.004201638, 0.00410005, 0.004023637, 0.003981619, 0.003938459 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehy3002[29] = { 0.9018702, 0.5723014, 0.3745182, 0.3208895, 0.210023, 0.1555102, 0.1212915, 0.09196292, 0.07095901, 0.05635456, 0.04553154, 0.03644285, 0.02922548, 0.02308758, 0.01919083, 0.0162996, 0.01391664,
   0.01250411, 0.01135502, 0.01093751, 0.009843892, 0.009277113, 0.008877483, 0.008526713, 0.008308921, 0.008106484, 0.007968492, 0.007884283, 0.007804647 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->SetMinimum(0.009139879);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->SetMaximum(3.950975);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13002);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fx2[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fy2[29] = { 3.419953, 0.9502977, 1.120948, 1.132961, 0.5011958, 0.2889224, 0.3499606, 0.3650923, 0.1731864, 0.09040518, 0.07243897, 0.07647592, 0.07418472, 0.05936861, 0.0467752, 0.04123777, 0.03648893,
   0.03193763, 0.02850009, 0.02662359, 0.02336606, 0.0188812, 0.0162349, 0.01479754, 0.01431771, 0.01405569, 0.01397037, 0.01391897, 0.01386448 };
   graph = new TGraph(29,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fx2,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fy2);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->SetMinimum(0.01247804);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->SetMaximum(3.760562);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs2);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fx3003[27] = { 1200, 1400, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fy3003[27] = { 7.229337, 3.436231, 1.105192, 0.8121218, 0.5042659, 0.4366568, 0.320673, 0.2440044, 0.1815764, 0.1282341, 0.09222284, 0.07242796, 0.05634509, 0.04500951, 0.03728971, 0.03162936, 0.02712356,
   0.02439107, 0.02181842, 0.02043194, 0.01899975, 0.01808238, 0.01733141, 0.01682438, 0.01645355, 0.01611266, 0.01584678 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_felx3003[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fely3003[27] = { 2.020199, 0.9602364, 0.30884, 0.2269431, 0.1409144, 0.1220214, 0.08961033, 0.06818574, 0.05074056, 0.03583433, 0.02577118, 0.0202396, 0.01574533, 0.01257767, 0.01042041, 0.008838656, 0.007579532,
   0.006815953, 0.006097041, 0.005709595, 0.005309378, 0.005053025, 0.004843168, 0.004701481, 0.004597856, 0.004502595, 0.004428297 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehx3003[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehy3003[27] = { 2.472413, 1.182245, 0.4081559, 0.2860002, 0.2852185, 0.1376132, 0.1302369, 0.0951067, 0.06237717, 0.04647815, 0.03862295, 0.02200926, 0.02290989, 0.01950826, 0.01672366, 0.01491322, 0.0138302,
   0.01185304, 0.01164085, 0.01059433, 0.01039896, 0.009813194, 0.00942063, 0.009161544, 0.008938684, 0.008789043, 0.008688623 };
   grae = new TGraphAsymmErrors(27,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetMinimum(0.01027663);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetMaximum(10.67078);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fx3[27] = { 1200, 1400, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fy3[27] = { 5.265066, 2.662195, 1.074623, 0.8817103, 0.6308822, 0.3655887, 0.2468223, 0.1814678, 0.1512758, 0.1305289, 0.106673, 0.08507764, 0.06706753, 0.05461153, 0.0456677, 0.0389475, 0.03416537,
   0.03024264, 0.0267751, 0.02399293, 0.01908472, 0.01778793, 0.01786041, 0.01793525, 0.01716778, 0.01659343, 0.01618085 };
   graph = new TGraph(27,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fx3,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->SetMinimum(0.01456277);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->SetMaximum(5.789955);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.002965553);
   chist_copy__2->SetMaximum(243.6969);
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
