#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qstar__c____qstar__SRC50_SRC50_SRB_SRL50__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 17:34:53 2024) by ROOT version 6.32.02
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
   up__0->Range(431.1006,-0.1178986,7030.614,1.061087);
   up__0->SetFillColor(0);
   up__0->SetFillStyle(4000);
   up__0->SetBorderMode(0);
   up__0->SetBorderSize(0);
   up__0->SetTickx(1);
   up__0->SetTicky(1);
   up__0->SetLeftMargin(0.120603);
   up__0->SetRightMargin(0.08040201);
   up__0->SetTopMargin(0.05181347);
   up__0->SetFrameBorderMode(0);
   up__0->SetFrameBorderMode(0);
   
   TH1D *chist__1 = new TH1D("chist__1","",10,1227.022,6500);
   chist__1->SetMinimum(0);
   chist__1->SetMaximum(1);
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
   chist__1->GetYaxis()->SetTitle("Coupling (f=f_{s}=f')");
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
   
   TLegend *leg = new TLegend(0.540201,0.1352,0.879397,0.2232,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.02125342);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection","Exp.#pm1#sigma SRC50, c*","LF");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1437;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection","Exp.#pm1#sigma SRC50+SRB+SRL50, c*","LF");

   ci = 1439;
   color = new TColor(ci, 0.9333333, 0.5215687, 0.2901961, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.540201,0.232,"#bf{#it{ATLAS}} #scale[1.0]{Internal}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.540201,0.276,"#sqrt{s} = 13 TeV, 140.07 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.540201,0.32,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.540201,0.3552,"c*");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t Graph0_fx1[49] = { 1421.053, 1481.413, 1605.263, 1676.544, 1789.474, 1854.623, 1973.684, 2001.712, 2115.871, 2157.895, 2216.07, 2299.647, 2342.105, 2375.956, 2460.137, 2513.732, 2526.316,
   2598.118, 2710.526, 2716.535, 2729.981, 2756.588, 2799.529, 3198.632, 3162.389, 3113.8, 3078.947, 3058.653, 3009.571, 2942.789, 2894.737, 2870.156, 2794.492,
   2715.727, 2710.526, 2624.357, 2526.316, 2512.094, 2413.94, 2342.105, 2275.221, 2157.895, 2102.585, 1973.684, 1893.688, 1789.474, 1605.263, 1600.275, 1421.053 };
   Double_t Graph0_fy1[49] = { 0.2560675, 0.2705263, 0.3051285, 0.3226316, 0.3564447, 0.3747368, 0.4165438, 0.4268421, 0.4789474, 0.5031471, 0.5310526, 0.5831579, 0.6147867, 0.6352631, 0.6873684, 0.7394737, 0.7487249,
   0.7915789, 0.8408, 0.8436842, 0.8957894, 0.9478948, 1, 1, 0.9478948, 0.8957894, 0.8670188, 0.8436842, 0.7915789, 0.7394737, 0.7077191, 0.6873684, 0.6352631,
   0.5831579, 0.5804822, 0.5310526, 0.4862981, 0.4789474, 0.4268421, 0.3985187, 0.3747368, 0.3404747, 0.3226316, 0.2884212, 0.2705263, 0.2491459, 0.2195087, 0.2184211, 0.1798502 };
   TGraph *graph = new TGraph(49,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("");

   ci = 1437;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","",100,1243.295,3376.389);
   Graph_Graph01->SetMinimum(0.09783524);
   Graph_Graph01->SetMaximum(1.082015);
   Graph_Graph01->SetDirectory(nullptr);
   Graph_Graph01->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw(" f");
   
   Double_t tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection_fx2[25] = { 1421.053, 1433.861, 1605.263, 1681.093, 1789.474, 1905.424, 1973.684, 2079.887, 2157.895, 2218.157, 2320.717, 2342.105, 2425.345, 2515.154, 2526.316, 2597.281, 2682.237,
   2710.526, 2748.592, 2819.43, 2890.359, 2894.737, 2934.634, 2983.032, 3020.638 };
   Double_t tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection_fy2[25] = { 0.2156644, 0.2184211, 0.2557974, 0.2705263, 0.2950594, 0.3226316, 0.3416047, 0.3747368, 0.40637, 0.4268421, 0.4789474, 0.4917272, 0.5310526, 0.5831579, 0.5915184, 0.6352631, 0.6873684,
   0.7123569, 0.7394737, 0.7915789, 0.8436842, 0.8516234, 0.8957894, 0.9478948, 1 };
   graph = new TGraph(25,tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection_fx2,tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection_fy2);
   graph->SetName("tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection");
   graph->SetTitle("");

   ci = 1437;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2 = new TH1F("Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2","",100,1261.094,3180.596);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->SetMinimum(0.1372309);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->SetMaximum(1.078434);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->SetDirectory(nullptr);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->SetLineColor(ci);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__cStar__Nom__SRC50__phjet_m_exp_intersection2);
   
   graph->Draw(" lx");
   
   Double_t Graph1_fx3[48] = { 1605.263, 1789.474, 1797.283, 1973.684, 1980.178, 2128.244, 2157.895, 2247.706, 2338.309, 2342.105, 2437.944, 2521.177, 2526.316, 2629.28, 2682.478, 2710.526, 2757.748,
   2861.954, 2894.737, 2899.016, 2974.44, 3004.954, 3445.729, 3408.837, 3378.536, 3327.402, 3263.158, 3250.055, 3168.101, 3082.489, 3078.947, 2991.731, 2894.737,
   2892.083, 2799.016, 2710.526, 2670.497, 2547.885, 2526.316, 2460.221, 2342.105, 2274.371, 2157.895, 2028.637, 1973.684, 1789.474, 1720.041, 1605.263 };
   Double_t Graph1_fy3[48] = { 0.2794616, 0.3208621, 0.3226316, 0.3726512, 0.3747368, 0.4268421, 0.4407339, 0.4789474, 0.5310526, 0.5337296, 0.5831579, 0.6352631, 0.6381778, 0.6873684, 0.7394737, 0.7616472, 0.7915789,
   0.8436842, 0.8916995, 0.8957894, 0.9478948, 1, 1, 0.9478948, 0.8957894, 0.8436842, 0.8008776, 0.7915789, 0.7394737, 0.6873684, 0.6854356, 0.6352631, 0.5847198,
   0.5831579, 0.5310526, 0.4966215, 0.4789474, 0.4268421, 0.4160394, 0.3747368, 0.3412544, 0.3226316, 0.3017295, 0.2705263, 0.2603572, 0.2283122, 0.2184211, 0.2009127 };
   graph = new TGraph(48,Graph1_fx3,Graph1_fy3);
   graph->SetName("Graph1");
   graph->SetTitle("");

   ci = 1439;
   color = new TColor(ci, 0.9333333, 0.5215687, 0.2901961, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","",100,1421.217,3629.776);
   Graph_Graph13->SetMinimum(0.121004);
   Graph_Graph13->SetMaximum(1.079909);
   Graph_Graph13->SetDirectory(nullptr);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw(" f");
   
   Double_t tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fx4[24] = { 1605.263, 1789.474, 1796.809, 1973.684, 2035.744, 2157.895, 2197.954, 2342.105, 2346.99, 2464.922, 2526.316, 2570.412, 2671.36, 2710.526, 2763.538, 2859.71, 2894.737,
   2937.834, 3018.85, 3074.934, 3078.947, 3145.22, 3203.819, 3237.416 };
   Double_t tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fy4[24] = { 0.2360754, 0.2691537, 0.2705263, 0.30672, 0.3226316, 0.3635786, 0.3747368, 0.424944, 0.4268421, 0.4789474, 0.5124584, 0.5310526, 0.5831579, 0.6076735, 0.6352631, 0.6873684, 0.7140746,
   0.7394737, 0.7915789, 0.8436842, 0.8475714, 0.8957894, 0.9478948, 1 };
   graph = new TGraph(24,tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fx4,tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fy4);
   graph->SetName("tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection");
   graph->SetTitle("");

   ci = 1439;
   color = new TColor(ci, 0.9333333, 0.5215687, 0.2901961, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4 = new TH1F("Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4","",100,1442.048,3400.631);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->SetMinimum(0.159683);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->SetMaximum(1.076392);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->SetDirectory(nullptr);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->SetLineColor(ci);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection4);
   
   graph->Draw(" lx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,1227.022,6500);
   chist_copy__2->SetMinimum(0);
   chist_copy__2->SetMaximum(1);
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
   chist_copy__2->GetYaxis()->SetTitle("Coupling (f=f_{s}=f')");
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
