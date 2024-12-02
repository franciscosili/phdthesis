#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__width0p02__SRL50_SRB_SRC50__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:02:58 2024) by ROOT version 6.32.02
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
   up__0->Range(-531.3208,-2.999128,9180.881,1.696659);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,640,8400);
   chist__1->SetMinimum(0.002954276);
   chist__1->SetMaximum(28.40231);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs","SRL50","PL");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs","SRB","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs","SRC50","PL");

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
      tex = new TLatex(0.160804,0.809,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7738,"Generic gaussians");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7386,"#sigma_{G}/m_{G}=0.02");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3001[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3001[31] = { 0.6156878, 0.4530672, 0.3377476, 0.261236, 0.2051281, 0.1616486, 0.1285656, 0.1026193, 0.08271688, 0.06766203, 0.05595154, 0.04691369, 0.03974984, 0.0340541, 0.02952079, 0.02597244, 0.02313983,
   0.02091172, 0.01916829, 0.01779064, 0.01681106, 0.0160103, 0.01540061, 0.01493985, 0.01459461, 0.0143382, 0.01414949, 0.01401187, 0.01391217, 0.0138364, 0.01376616 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3001[31] = { 0.1720507, 0.1266072, 0.09438175, 0.073001, 0.05732196, 0.04517184, 0.03592697, 0.02867641, 0.02311479, 0.01890779, 0.01563536, 0.01310978, 0.01110788, 0.009516233, 0.008249424, 0.007257859, 0.006466301,
   0.005843669, 0.005356476, 0.004971499, 0.004697762, 0.004473994, 0.004303616, 0.004174861, 0.004078386, 0.004006732, 0.003953998, 0.003915543, 0.00388768, 0.003866508, 0.00384688 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3001[31] = { 0.2431173, 0.1796583, 0.1347637, 0.1049962, 0.08310363, 0.06627545, 0.05335236, 0.04321463, 0.03551093, 0.02965357, 0.02513353, 0.02152588, 0.01868124, 0.01640447, 0.01455562, 0.01311272, 0.0119566,
   0.01102421, 0.0102839, 0.009773455, 0.009186012, 0.008817415, 0.008525252, 0.008297926, 0.008130103, 0.007964354, 0.007859179, 0.007780003, 0.007721082, 0.00767541, 0.007653532 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetMinimum(0.008927353);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetMaximum(0.9436937);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx1[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy1[31] = { 0.6927867, 0.3675056, 0.3161232, 0.1752521, 0.1900855, 0.2554064, 0.1916486, 0.1460718, 0.05996613, 0.06127583, 0.03735804, 0.0452862, 0.05174476, 0.04377433, 0.01974806, 0.01696118, 0.01983335,
   0.02724566, 0.02220586, 0.01513713, 0.01469025, 0.01446992, 0.01423791, 0.01408281, 0.01398565, 0.01394983, 0.01388862, 0.01383095, 0.01379708, 0.01377165, 0.01374992 };
   TGraph *graph = new TGraph(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetMinimum(0.01237493);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetMaximum(0.7606904);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3002[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3002[29] = { 0.3230809, 0.2249303, 0.1708023, 0.128091, 0.09788312, 0.07621336, 0.05956569, 0.04767097, 0.03885354, 0.0314597, 0.02599546, 0.02274691, 0.01920974, 0.01740341, 0.0161141, 0.01521086, 0.01462023,
   0.01424338, 0.0140095, 0.01386829, 0.01371853, 0.01372381, 0.01369708, 0.01368243, 0.01367456, 0.01367043, 0.01366829, 0.0136672, 0.01366666 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3002[29] = { 0.09028321, 0.06285556, 0.04772978, 0.03579435, 0.02735291, 0.02129741, 0.01664532, 0.0133214, 0.01085741, 0.008791244, 0.007264291, 0.006356503, 0.005368058, 0.004863291, 0.004502997, 0.004250594, 0.004085546,
   0.003980235, 0.00391488, 0.00387542, 0.003833568, 0.003835046, 0.003827577, 0.003823482, 0.003821283, 0.003820127, 0.00381953, 0.003819225, 0.003819075 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3002[29] = { 0.1289749, 0.09082138, 0.06662173, 0.05317215, 0.04141959, 0.03226802, 0.02645493, 0.02177281, 0.01822663, 0.01523147, 0.01288508, 0.01174044, 0.01027756, 0.009498442, 0.008928996, 0.008438034, 0.008159354,
   0.007912678, 0.007778875, 0.007694568, 0.007623348, 0.007626948, 0.007616187, 0.007585307, 0.007580021, 0.007577207, 0.007575749, 0.007575003, 0.007574629 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetMinimum(0.008862828);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetMaximum(0.4962767);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx2[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy2[29] = { 0.3059949, 0.1822239, 0.1692658, 0.1967188, 0.07973257, 0.06377523, 0.05077324, 0.05614776, 0.06416271, 0.03081094, 0.02186922, 0.02805254, 0.01631152, 0.01502355, 0.01451346, 0.01417622, 0.01412868,
   0.01392072, 0.01383071, 0.01378279, 0.0137255, 0.01373723, 0.01358756, 0.01374401, 0.0136841, 0.01371452, 0.01368302, 0.01368267, 0.01360748 };
   graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx2,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy2);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->SetMinimum(0.0122288);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->SetMaximum(0.3352356);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs2);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3003[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3003[29] = { 0.8164591, 0.5650953, 0.4095534, 0.3081763, 0.2352097, 0.179719, 0.1389411, 0.1100019, 0.086843, 0.06966374, 0.05642008, 0.04608348, 0.03833544, 0.03205648, 0.02741685, 0.02379441, 0.02102126,
   0.01894352, 0.01748014, 0.0163741, 0.01553102, 0.01493937, 0.01454422, 0.01426356, 0.01404706, 0.01391529, 0.0138412, 0.01376031, 0.01371883 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3003[29] = { 0.2281551, 0.1579129, 0.1144475, 0.08611821, 0.06572808, 0.05022151, 0.03882634, 0.03073945, 0.02426781, 0.01946716, 0.01576629, 0.01287778, 0.01071263, 0.008958011, 0.00766149, 0.006649221, 0.005874277,
   0.005293665, 0.004884732, 0.004575653, 0.004340059, 0.004174728, 0.004064304, 0.003985874, 0.003925375, 0.003888554, 0.003867849, 0.003845245, 0.003833653 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3003[29] = { 0.3142573, 0.2234769, 0.1612454, 0.1235598, 0.09498546, 0.07383116, 0.05912286, 0.04631406, 0.03670938, 0.03029571, 0.02521121, 0.02109876, 0.01807696, 0.01558992, 0.0136226, 0.01225133, 0.01111798,
   0.01024797, 0.009564646, 0.008997873, 0.0085955, 0.008302355, 0.008107595, 0.007924993, 0.00780087, 0.00772359, 0.007678055, 0.007649978, 0.007623804 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetMinimum(0.008896658);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetMaximum(1.2428);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx3[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy3[29] = { 0.9072906, 0.4217105, 0.4345653, 0.4016608, 0.1715572, 0.1549278, 0.1298564, 0.1495244, 0.08629203, 0.05493229, 0.04790922, 0.02932806, 0.05927906, 0.03257054, 0.02709482, 0.02309875, 0.01594141,
   0.0258554, 0.02782621, 0.01795036, 0.01433541, 0.01408004, 0.01395343, 0.01393519, 0.01384823, 0.01379141, 0.01378911, 0.01376426, 0.01372465 };
   graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx3,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->SetMinimum(0.01235218);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->SetMaximum(0.9966472);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,8400);
   chist_copy__2->SetMinimum(0.002954276);
   chist_copy__2->SetMaximum(28.40231);
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
