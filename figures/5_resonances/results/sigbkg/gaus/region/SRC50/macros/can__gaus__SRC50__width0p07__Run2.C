#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRC50__width0p07__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:58 2024) by ROOT version 6.32.02
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
   up__0->Range(-374.3397,-3.283065,8036.226,3.106626);
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
   chist__1->SetMinimum(0.002269365);
   chist__1->SetMaximum(596.4218);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs","Obs. ","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
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
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.07");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fx3001[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fy3001[29] = { 2.690848, 1.449118, 1.013024, 0.7139013, 0.5368932, 0.3911719, 0.3071325, 0.2380894, 0.1725129, 0.1382937, 0.108912, 0.08585875, 0.06863276, 0.0552912, 0.04465388, 0.03669173, 0.03061314,
   0.02584505, 0.02253835, 0.0199099, 0.0183269, 0.01710087, 0.01625806, 0.01547242, 0.01503567, 0.01467214, 0.01439869, 0.01424833, 0.01409388 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_felx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fely3001[29] = { 1.246601, 0.6713389, 0.4693079, 0.330732, 0.2487288, 0.1812199, 0.1422866, 0.1103007, 0.07992078, 0.06406791, 0.0504561, 0.03977614, 0.03179578, 0.02561499, 0.02068699, 0.01699833, 0.01418228,
   0.01197335, 0.01044143, 0.009223743, 0.008490382, 0.007922392, 0.007531938, 0.007167971, 0.00696564, 0.006797224, 0.006670543, 0.006600883, 0.006529331 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fehx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fehy3001[29] = { 2.046698, 1.255916, 0.8259322, 0.6877954, 0.4673454, 0.3552009, 0.264692, 0.183712, 0.1671521, 0.1300319, 0.1053905, 0.08494999, 0.06827535, 0.05319508, 0.04607378, 0.04090128, 0.03765354,
   0.03475873, 0.03221615, 0.03035876, 0.02868301, 0.02756934, 0.02678611, 0.02619381, 0.02574863, 0.02549612, 0.02526351, 0.02511866, 0.02498937 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->SetMinimum(0.006808094);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->SetMaximum(5.210545);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
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

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
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
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fx3003[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fy3003[29] = { 2.690848, 1.449118, 1.013024, 0.7139013, 0.5368932, 0.3911719, 0.3071325, 0.2380894, 0.1725129, 0.1382937, 0.108912, 0.08585875, 0.06863276, 0.0552912, 0.04465388, 0.03669173, 0.03061314,
   0.02584505, 0.02253835, 0.0199099, 0.0183269, 0.01710087, 0.01625806, 0.01547242, 0.01503567, 0.01467214, 0.01439869, 0.01424833, 0.01409388 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_felx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fely3003[29] = { 0.7519432, 0.4049481, 0.2830841, 0.1994959, 0.1500319, 0.1093109, 0.08582654, 0.06653281, 0.04820781, 0.03864543, 0.03043486, 0.02399276, 0.01917905, 0.01545083, 0.01247829, 0.01025331, 0.008554676,
   0.00722226, 0.00629822, 0.005563714, 0.005121354, 0.004778746, 0.004543226, 0.004323683, 0.004201638, 0.00410005, 0.004023637, 0.003981619, 0.003938459 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehy3003[29] = { 0.9018702, 0.5723014, 0.3745182, 0.3208895, 0.210023, 0.1555102, 0.1212915, 0.09196292, 0.07095901, 0.05635456, 0.04553154, 0.03644285, 0.02922548, 0.02308758, 0.01919083, 0.0162996, 0.01391664,
   0.01250411, 0.01135502, 0.01093751, 0.009843892, 0.009277113, 0.008877483, 0.008526713, 0.008308921, 0.008106484, 0.007968492, 0.007884283, 0.007804647 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetMinimum(0.009139879);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetMaximum(3.950975);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fx1[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fy1[29] = { 3.419953, 0.9502977, 1.120948, 1.132961, 0.5011958, 0.2889224, 0.3499606, 0.3650923, 0.1731864, 0.09040518, 0.07243897, 0.07647592, 0.07418472, 0.05936861, 0.0467752, 0.04123777, 0.03648893,
   0.03193763, 0.02850009, 0.02662359, 0.02336606, 0.0188812, 0.0162349, 0.01479754, 0.01431771, 0.01405569, 0.01397037, 0.01391897, 0.01386448 };
   TGraph *graph = new TGraph(29,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fx1,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->SetMinimum(0.01247804);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->SetMaximum(3.760562);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.002269365);
   chist_copy__2->SetMaximum(596.4218);
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
