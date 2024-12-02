#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__QBH__n6__n6____QBH__SR__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 15:27:25 2024) by ROOT version 6.32.02
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
   up__0->Range(1625.545,-4.983197,8968.27,7.132779);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,2511.1,8377.9);
   chist__1->SetMinimum(0.0001692);
   chist__1->SetMaximum(3198954);
   chist__1->SetDirectory(nullptr);
   chist__1->SetStats(0);
   chist__1->SetLineColor(0);
   chist__1->SetLineWidth(0);
   chist__1->SetMarkerColor(0);
   chist__1->SetMarkerStyle(20);
   chist__1->SetMarkerSize(0);
   chist__1->GetXaxis()->SetTitle("m_{QBH} [GeV]");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2","Exp.#pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1","Exp.#pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__QBH_n6__Nom__SR__phjet_m_xs","LO prediction, QBH n=6","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
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
      tex = new TLatex(0.160804,0.7738,"SR");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.743,"QBH n=6");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.72804," Exp. limit = 7572.4 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.70164," Obs. limit = 7590.1 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fx3001[45] = { 3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778,
   4889, 5000, 5111, 5222, 5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556,
   6667, 6778, 6889, 7000, 7111, 7222, 7333, 7444, 7556, 7667, 7778, 7889 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fy3001[45] = { 1.159863, 1.049176, 0.5646203, 0.4868043, 0.5086251, 0.4246376, 0.2722279, 0.2857577, 0.2402789, 0.2030177, 0.1749884, 0.1521846, 0.1211387, 0.1087308, 0.09841037, 0.0895283, 0.08569587,
   0.07830563, 0.0722102, 0.07285438, 0.06325595, 0.06496555, 0.05716339, 0.05474341, 0.05273385, 0.05102881, 0.05234486, 0.05069431, 0.04958336, 0.04835524, 0.04802263, 0.04543581, 0.0450845,
   0.04463145, 0.04564202, 0.04414393, 0.04400604, 0.04386747, 0.04397314, 0.04385676, 0.04400131, 0.04449309, 0.04591988, 0.04607859, 0.0488831 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_felx3001[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fely3001[45] = { 0.5373346, 0.4860561, 0.261574, 0.2255239, 0.2356329, 0.1967237, 0.1261162, 0.1323842, 0.111315, 0.09405287, 0.08106764, 0.0705032, 0.05612046, 0.05037218, 0.04559099, 0.04147615, 0.03970069,
   0.03627698, 0.03345313, 0.03375156, 0.02930485, 0.03009686, 0.02648233, 0.02536121, 0.02443023, 0.02364033, 0.02425003, 0.02348537, 0.02297069, 0.02240174, 0.02224765, 0.02104924, 0.02088649,
   0.0206766, 0.02114477, 0.02045075, 0.02038686, 0.02032267, 0.02037162, 0.02031771, 0.02038467, 0.0206125, 0.0212735, 0.02134702, 0.02264628 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fehx3001[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fehy3001[45] = { 0.5960872, 0.4820365, 0.6312522, 0.5845412, 0.3162508, 0.272128, 0.301546, 0.2002603, 0.1841908, 0.1804738, 0.1494787, 0.149124, 0.1443432, 0.1389491, 0.1301784, 0.1238192, 0.1072549,
   0.1028095, 0.1006477, 0.1006561, 0.09361723, 0.09506637, 0.08902035, 0.08685841, 0.0853655, 0.08334432, 0.08450946, 0.08326374, 0.08187572, 0.08124534, 0.08104055, 0.07874788, 0.07833347,
   0.07847709, 0.07950617, 0.07802799, 0.07782518, 0.07778761, 0.07786221, 0.07793843, 0.07827618, 0.07855252, 0.08060376, 0.08074753, 0.08514808 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(45,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fx3001,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fy3001,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_felx3001,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fehx3001,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fely3001,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001","",100,2511.1,8377.9);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->SetMinimum(0.02118515);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->SetMaximum(1.929191);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fx3002[45] = { 3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778,
   4889, 5000, 5111, 5222, 5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556,
   6667, 6778, 6889, 7000, 7111, 7222, 7333, 7444, 7556, 7667, 7778, 7889 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fy3002[45] = { 1.159863, 1.049176, 0.5646203, 0.4868043, 0.5086251, 0.4246376, 0.2722279, 0.2857577, 0.2402789, 0.2030177, 0.1749884, 0.1521846, 0.1211387, 0.1087308, 0.09841037, 0.0895283, 0.08569587,
   0.07830563, 0.0722102, 0.07285438, 0.06325595, 0.06496555, 0.05716339, 0.05474341, 0.05273385, 0.05102881, 0.05234486, 0.05069431, 0.04958336, 0.04835524, 0.04802263, 0.04543581, 0.0450845,
   0.04463145, 0.04564202, 0.04414393, 0.04400604, 0.04386747, 0.04397314, 0.04385676, 0.04400131, 0.04449309, 0.04591988, 0.04607859, 0.0488831 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_felx3002[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fely3002[45] = { 0.3241175, 0.2931866, 0.1577801, 0.1360348, 0.1421326, 0.1186627, 0.07607263, 0.07985348, 0.06714464, 0.05673221, 0.04889958, 0.04252716, 0.03385157, 0.03038424, 0.02750025, 0.0250182, 0.02394725,
   0.02188209, 0.02017875, 0.02035877, 0.01767654, 0.01815427, 0.015974, 0.01529775, 0.01473619, 0.01425973, 0.01462749, 0.01416625, 0.0138558, 0.01351261, 0.01341966, 0.01269679, 0.01259862,
   0.01247202, 0.01275442, 0.01233579, 0.01229725, 0.01225853, 0.01228806, 0.01225554, 0.01229593, 0.01243336, 0.01283207, 0.01287642, 0.01366012 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehx3002[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehy3002[45] = { 0.2340766, 0.2172014, 0.3584011, 0.3068893, 0.1442007, 0.109946, 0.1530965, 0.0917633, 0.04596008, 0.07236608, 0.06569652, 0.06016277, 0.06352521, 0.05611718, 0.05127667, 0.04891257, 0.03800774,
   0.03767489, 0.03710933, 0.0358158, 0.03270857, 0.03390267, 0.03047507, 0.02914342, 0.02844361, 0.02807719, 0.02790636, 0.02775297, 0.0272046, 0.02670084, 0.02647169, 0.02531418, 0.02486954,
   0.02481659, 0.02545512, 0.02450512, 0.02448761, 0.024391, 0.02422249, 0.02444703, 0.02449811, 0.02444191, 0.02531924, 0.02541597, 0.02724367 };
   grae = new TGraphAsymmErrors(45,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fx3002,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fy3002,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_felx3002,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehx3002,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fely3002,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002","",100,2511.1,8377.9);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->SetMinimum(0.0284411);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->SetMaximum(1.530173);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_xs_fx1[7] = { 3000, 4000, 5000, 6000, 7000, 8000, 9000 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_xs_fy1[7] = { 5070, 388, 33.7, 2.9, 0.222, 0.0135, 0.000564 };
   TGraph *graph = new TGraph(7,tgraph__QBH_n6__Nom__SR__phjet_m_xs_fx1,tgraph__QBH_n6__Nom__SR__phjet_m_xs_fy1);
   graph->SetName("tgraph__QBH_n6__Nom__SR__phjet_m_xs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1 = new TH1F("Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1","",100,2400,9600);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->SetMinimum(0.0005076);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->SetMaximum(5577);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->SetStats(0);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->SetLineWidth(2);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->SetMarkerStyle(20);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__QBH_n6__Nom__SR__phjet_m_xs1);
   
   graph->Draw(" l");
   
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fx3003[45] = { 3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778,
   4889, 5000, 5111, 5222, 5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556,
   6667, 6778, 6889, 7000, 7111, 7222, 7333, 7444, 7556, 7667, 7778, 7889 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fy3003[45] = { 1.159863, 1.049176, 0.5646203, 0.4868043, 0.5086251, 0.4246376, 0.2722279, 0.2857577, 0.2402789, 0.2030177, 0.1749884, 0.1521846, 0.1211387, 0.1087308, 0.09841037, 0.0895283, 0.08569587,
   0.07830563, 0.0722102, 0.07285438, 0.06325595, 0.06496555, 0.05716339, 0.05474341, 0.05273385, 0.05102881, 0.05234486, 0.05069431, 0.04958336, 0.04835524, 0.04802263, 0.04543581, 0.0450845,
   0.04463145, 0.04564202, 0.04414393, 0.04400604, 0.04386747, 0.04397314, 0.04385676, 0.04400131, 0.04449309, 0.04591988, 0.04607859, 0.0488831 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_felx3003[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fely3003[45] = { 0.3241175, 0.2931866, 0.1577801, 0.1360348, 0.1421326, 0.1186627, 0.07607263, 0.07985348, 0.06714464, 0.05673221, 0.04889958, 0.04252716, 0.03385157, 0.03038424, 0.02750025, 0.0250182, 0.02394725,
   0.02188209, 0.02017875, 0.02035877, 0.01767654, 0.01815427, 0.015974, 0.01529775, 0.01473619, 0.01425973, 0.01462749, 0.01416625, 0.0138558, 0.01351261, 0.01341966, 0.01269679, 0.01259862,
   0.01247202, 0.01275442, 0.01233579, 0.01229725, 0.01225853, 0.01228806, 0.01225554, 0.01229593, 0.01243336, 0.01283207, 0.01287642, 0.01366012 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehx3003[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehy3003[45] = { 0.2340766, 0.2172014, 0.3584011, 0.3068893, 0.1442007, 0.109946, 0.1530965, 0.0917633, 0.04596008, 0.07236608, 0.06569652, 0.06016277, 0.06352521, 0.05611718, 0.05127667, 0.04891257, 0.03800774,
   0.03767489, 0.03710933, 0.0358158, 0.03270857, 0.03390267, 0.03047507, 0.02914342, 0.02844361, 0.02807719, 0.02790636, 0.02775297, 0.0272046, 0.02670084, 0.02647169, 0.02531418, 0.02486954,
   0.02481659, 0.02545512, 0.02450512, 0.02448761, 0.024391, 0.02422249, 0.02444703, 0.02449811, 0.02444191, 0.02531924, 0.02541597, 0.02724367 };
   grae = new TGraphAsymmErrors(45,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fx3003,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fy3003,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_felx3003,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehx3003,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fely3003,tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003","",100,2511.1,8377.9);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->SetMinimum(0.0284411);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->SetMaximum(1.530173);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__QBH_n6__Nom__SR__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_obs_fx2[45] = { 3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778,
   4889, 5000, 5111, 5222, 5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556,
   6667, 6778, 6889, 7000, 7111, 7222, 7333, 7444, 7556, 7667, 7778, 7889 };
   Double_t tgraph__QBH_n6__Nom__SR__phjet_m_obs_fy2[45] = { 1.153117, 0.8007607, 0.6350092, 0.5536825, 0.4736774, 0.3972954, 0.2902877, 0.2731629, 0.2364879, 0.2120284, 0.1922779, 0.1580262, 0.1308623, 0.1167025, 0.1041731, 0.09239189, 0.08322523,
   0.08558318, 0.07761519, 0.07493335, 0.06579359, 0.05828493, 0.05734158, 0.05023367, 0.04788975, 0.04754607, 0.04722965, 0.0458091, 0.04544402, 0.04385804, 0.043788, 0.04132414, 0.04360682,
   0.04097533, 0.04324603, 0.04137592, 0.04295585, 0.04060876, 0.04061859, 0.04302092, 0.0430827, 0.04194731, 0.04387735, 0.0423568, 0.04587456 };
   graph = new TGraph(45,tgraph__QBH_n6__Nom__SR__phjet_m_obs_fx2,tgraph__QBH_n6__Nom__SR__phjet_m_obs_fy2);
   graph->SetName("tgraph__QBH_n6__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2 = new TH1F("Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2","",100,2511.1,8377.9);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->SetMinimum(0.03654788);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->SetMaximum(1.264368);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->SetLineColor(ci);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__QBH_n6__Nom__SR__phjet_m_obs2);
   
   graph->Draw(" plx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,2511.1,8377.9);
   chist_copy__2->SetMinimum(0.0001692);
   chist_copy__2->SetMaximum(3198954);
   chist_copy__2->SetDirectory(nullptr);
   chist_copy__2->SetStats(0);
   chist_copy__2->SetLineColor(0);
   chist_copy__2->SetLineWidth(0);
   chist_copy__2->SetMarkerColor(0);
   chist_copy__2->SetMarkerStyle(20);
   chist_copy__2->SetMarkerSize(0);
   chist_copy__2->GetXaxis()->SetTitle("m_{QBH} [GeV]");
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
