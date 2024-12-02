#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRB__width0p02__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:42 2024) by ROOT version 6.32.02
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
   up__0->Range(-374.3397,-3.110786,8036.226,1.422433);
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
   chist__1->SetMinimum(0.002200575);
   chist__1->SetMaximum(15.4011);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs","Obs. ","PL");
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
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.02");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fx3001[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fy3001[29] = { 0.3230809, 0.2249303, 0.1708023, 0.128091, 0.09788312, 0.07621336, 0.05956569, 0.04767097, 0.03885354, 0.0314597, 0.02599546, 0.02274691, 0.01920974, 0.01740341, 0.0161141, 0.01521086, 0.01462023,
   0.01424338, 0.0140095, 0.01386829, 0.01371853, 0.01372381, 0.01369708, 0.01368243, 0.01367456, 0.01367043, 0.01366829, 0.0136672, 0.01366666 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_felx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fely3001[29] = { 0.1496751, 0.1042044, 0.07912829, 0.05934127, 0.04534673, 0.03530768, 0.02759525, 0.02208473, 0.01799984, 0.01457447, 0.01204303, 0.01053806, 0.008899377, 0.008062554, 0.007465245, 0.007046801, 0.006773177,
   0.006598588, 0.00649024, 0.006424822, 0.006355439, 0.006357888, 0.006345506, 0.006338717, 0.006335072, 0.006333156, 0.006332166, 0.006331661, 0.006331412 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fehx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fehy3001[29] = { 0.2900478, 0.2058909, 0.1571179, 0.1222274, 0.09629835, 0.07683151, 0.06335042, 0.05345119, 0.04541624, 0.03911858, 0.03431433, 0.03172168, 0.02894331, 0.02744178, 0.02650417, 0.02573189, 0.02532583,
   0.02504149, 0.02486887, 0.02476757, 0.02468315, 0.0246865, 0.02466811, 0.02465813, 0.02465283, 0.02465008, 0.02464867, 0.02464796, 0.02464761 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->SetMinimum(0.006601725);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->SetMaximum(0.673708);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
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

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
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
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3003[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3003[29] = { 0.3230809, 0.2249303, 0.1708023, 0.128091, 0.09788312, 0.07621336, 0.05956569, 0.04767097, 0.03885354, 0.0314597, 0.02599546, 0.02274691, 0.01920974, 0.01740341, 0.0161141, 0.01521086, 0.01462023,
   0.01424338, 0.0140095, 0.01386829, 0.01371853, 0.01372381, 0.01369708, 0.01368243, 0.01367456, 0.01367043, 0.01366829, 0.0136672, 0.01366666 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3003[29] = { 0.09028321, 0.06285556, 0.04772978, 0.03579435, 0.02735291, 0.02129741, 0.01664532, 0.0133214, 0.01085741, 0.008791244, 0.007264291, 0.006356503, 0.005368058, 0.004863291, 0.004502997, 0.004250594, 0.004085546,
   0.003980235, 0.00391488, 0.00387542, 0.003833568, 0.003835046, 0.003827577, 0.003823482, 0.003821283, 0.003820127, 0.00381953, 0.003819225, 0.003819075 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3003[29] = { 0.1289749, 0.09082138, 0.06662173, 0.05317215, 0.04141959, 0.03226802, 0.02645493, 0.02177281, 0.01822663, 0.01523147, 0.01288508, 0.01174044, 0.01027756, 0.009498442, 0.008928996, 0.008438034, 0.008159354,
   0.007912678, 0.007778875, 0.007694568, 0.007623348, 0.007626948, 0.007616187, 0.007585307, 0.007580021, 0.007577207, 0.007575749, 0.007575003, 0.007574629 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->SetMinimum(0.008862828);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->SetMaximum(0.4962767);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx1[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy1[29] = { 0.3059949, 0.1822239, 0.1692658, 0.1967188, 0.07973257, 0.06377523, 0.05077324, 0.05614776, 0.06416271, 0.03081094, 0.02186922, 0.02805254, 0.01631152, 0.01502355, 0.01451346, 0.01417622, 0.01412868,
   0.01392072, 0.01383071, 0.01378279, 0.0137255, 0.01373723, 0.01358756, 0.01374401, 0.0136841, 0.01371452, 0.01368302, 0.01368267, 0.01360748 };
   TGraph *graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetMinimum(0.0122288);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetMaximum(0.3352356);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.002200575);
   chist_copy__2->SetMaximum(15.4011);
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
