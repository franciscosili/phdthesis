#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__QBH__n1__n1____QBH__SR__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 15:25:48 2024) by ROOT version 6.32.02
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
   up__0->Range(-402.3812,-4.837455,8275.521,7.889163);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,644.2,7577.8);
   chist__1->SetMinimum(0.0002724);
   chist__1->SetMaximum(1.697275e+07);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2","Exp.#pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1","Exp.#pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__QBH_n1__Nom__SR__phjet_m_xs","LO prediction, QBH n=1","L");
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
      tex = new TLatex(0.160804,0.743,"QBH n=1");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.72804," Exp. limit = 5346.4 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.70164," Obs. limit = 5347.4 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fx3001[49] = { 1222, 1333, 1667, 1889, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222, 3333, 3444,
   3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889, 5000, 5111, 5222,
   5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556, 6667, 6778, 6889, 7000 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fy3001[49] = { 49.434, 41.79611, 19.53992, 10.84445, 7.324357, 5.754858, 5.022503, 3.477009, 2.927072, 2.543097, 2.019076, 1.460076, 1.161964, 0.6904987, 0.7843314, 0.6204911, 0.5626385,
   0.4210588, 0.3460995, 0.232774, 0.1995034, 0.201891, 0.1913068, 0.1515587, 0.1457782, 0.1176872, 0.09854295, 0.0899871, 0.0826891, 0.08269552, 0.07370663, 0.06845754, 0.06375809,
   0.05912135, 0.05705458, 0.05461708, 0.05212092, 0.05082071, 0.04946782, 0.05087718, 0.04737851, 0.0467499, 0.04613908, 0.04569815, 0.0452428, 0.04494952, 0.0447197, 0.04457853, 0.0454951 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_felx3001[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fely3001[49] = { 22.9015, 19.36306, 9.052341, 5.023953, 3.393186, 2.666077, 2.326796, 1.610808, 1.356037, 1.178151, 0.9353858, 0.6764156, 0.5383082, 0.3198903, 0.3633605, 0.2874575, 0.2606559,
   0.1950657, 0.160339, 0.1078382, 0.09242477, 0.09353088, 0.0886275, 0.07021323, 0.0675353, 0.05452147, 0.04565241, 0.0416887, 0.03830773, 0.0383107, 0.03414638, 0.03171462, 0.02953748,
   0.0273894, 0.02643192, 0.02530269, 0.02414628, 0.02354393, 0.02291717, 0.02357009, 0.02194924, 0.02165802, 0.02137505, 0.02117078, 0.02095982, 0.02082395, 0.02071749, 0.02065208, 0.02107671 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fehx3001[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fehy3001[49] = { 46.25101, 36.64778, 14.50447, 7.739794, 4.466638, 3.437097, 2.297866, 1.272946, 1.160579, 1.119182, 0.7886506, 0.7192425, 0.5374176, 0.7912319, 0.2777336, 0.3917336, 0.3587174,
   0.2919742, 0.2302506, 0.273013, 0.2112834, 0.1801739, 0.1843356, 0.1507962, 0.1433088, 0.1323409, 0.1249246, 0.1208902, 0.1127653, 0.1108413, 0.1000401, 0.09627616, 0.09400131,
   0.09169893, 0.08902806, 0.08676822, 0.08521169, 0.08347702, 0.08186651, 0.08344383, 0.08031909, 0.07995646, 0.07959897, 0.07924911, 0.07916815, 0.0787784, 0.07865471, 0.07859923, 0.07956662 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(49,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fx3001,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fy3001,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_felx3001,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fehx3001,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fely3001,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001","",100,644.2,7577.8);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->SetMinimum(0.0215338);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->SetMaximum(105.2511);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fx3002[49] = { 1222, 1333, 1667, 1889, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222, 3333, 3444,
   3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889, 5000, 5111, 5222,
   5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556, 6667, 6778, 6889, 7000 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fy3002[49] = { 49.434, 41.79611, 19.53992, 10.84445, 7.324357, 5.754858, 5.022503, 3.477009, 2.927072, 2.543097, 2.019076, 1.460076, 1.161964, 0.6904987, 0.7843314, 0.6204911, 0.5626385,
   0.4210588, 0.3460995, 0.232774, 0.1995034, 0.201891, 0.1913068, 0.1515587, 0.1457782, 0.1176872, 0.09854295, 0.0899871, 0.0826891, 0.08269552, 0.07370663, 0.06845754, 0.06375809,
   0.05912135, 0.05705458, 0.05461708, 0.05212092, 0.05082071, 0.04946782, 0.05087718, 0.04737851, 0.0467499, 0.04613908, 0.04569815, 0.0452428, 0.04494952, 0.0447197, 0.04457853, 0.0454951 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_felx3002[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fely3002[49] = { 13.81407, 11.6797, 5.460326, 3.030422, 2.046752, 1.608164, 1.403512, 0.9716313, 0.8179546, 0.7106547, 0.5642199, 0.4080104, 0.3247047, 0.1929562, 0.2191772, 0.1733929, 0.1572263,
   0.1176626, 0.09671566, 0.06504744, 0.05575015, 0.05641734, 0.05345965, 0.04235226, 0.04073694, 0.03288707, 0.0275373, 0.02514641, 0.02310702, 0.02310882, 0.02059692, 0.01913009, 0.01781686,
   0.01652115, 0.0159436, 0.01526245, 0.01456491, 0.01420158, 0.01382352, 0.01421735, 0.01323967, 0.01306401, 0.01289332, 0.0127701, 0.01264286, 0.0125609, 0.01249668, 0.01245723, 0.01271336 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehx3002[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehy3002[49] = { 21.76081, 16.34443, 6.858838, 3.575451, 2.00879, 2.125174, 1.421051, 1.018805, 0.1945518, 0.3964945, 0.2671595, 0.5136971, 0.2455945, 0.467594, 0.1559127, 0.1328969, 0.156174,
   0.1206176, 0.08710447, 0.1291964, 0.08644993, 0.07313153, 0.05088181, 0.04593326, 0.05360447, 0.04785007, 0.04815832, 0.04715176, 0.04381114, 0.04556365, 0.03722196, 0.03418123, 0.0327396,
   0.03181513, 0.03071574, 0.02934229, 0.02893024, 0.0275392, 0.02703935, 0.02783767, 0.02627042, 0.02589949, 0.02551611, 0.02521044, 0.02502101, 0.02490291, 0.02489386, 0.02474579, 0.02509728 };
   grae = new TGraphAsymmErrors(49,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fx3002,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fy3002,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_felx3002,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehx3002,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fely3002,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002","",100,644.2,7577.8);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->SetMinimum(0.02890917);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->SetMaximum(78.31109);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_xs_fx1[7] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_xs_fy1[7] = { 26900, 417, 21.1, 1.6, 0.138, 0.0118, 0.000908 };
   TGraph *graph = new TGraph(7,tgraph__QBH_n1__Nom__SR__phjet_m_xs_fx1,tgraph__QBH_n1__Nom__SR__phjet_m_xs_fy1);
   graph->SetName("tgraph__QBH_n1__Nom__SR__phjet_m_xs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1 = new TH1F("Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1","",100,400,7600);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->SetMinimum(0.0008172);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->SetMaximum(29590);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->SetStats(0);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->SetLineWidth(2);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->SetMarkerStyle(20);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__QBH_n1__Nom__SR__phjet_m_xs1);
   
   graph->Draw(" l");
   
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fx3003[49] = { 1222, 1333, 1667, 1889, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222, 3333, 3444,
   3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889, 5000, 5111, 5222,
   5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556, 6667, 6778, 6889, 7000 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fy3003[49] = { 49.434, 41.79611, 19.53992, 10.84445, 7.324357, 5.754858, 5.022503, 3.477009, 2.927072, 2.543097, 2.019076, 1.460076, 1.161964, 0.6904987, 0.7843314, 0.6204911, 0.5626385,
   0.4210588, 0.3460995, 0.232774, 0.1995034, 0.201891, 0.1913068, 0.1515587, 0.1457782, 0.1176872, 0.09854295, 0.0899871, 0.0826891, 0.08269552, 0.07370663, 0.06845754, 0.06375809,
   0.05912135, 0.05705458, 0.05461708, 0.05212092, 0.05082071, 0.04946782, 0.05087718, 0.04737851, 0.0467499, 0.04613908, 0.04569815, 0.0452428, 0.04494952, 0.0447197, 0.04457853, 0.0454951 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_felx3003[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fely3003[49] = { 13.81407, 11.6797, 5.460326, 3.030422, 2.046752, 1.608164, 1.403512, 0.9716313, 0.8179546, 0.7106547, 0.5642199, 0.4080104, 0.3247047, 0.1929562, 0.2191772, 0.1733929, 0.1572263,
   0.1176626, 0.09671566, 0.06504744, 0.05575015, 0.05641734, 0.05345965, 0.04235226, 0.04073694, 0.03288707, 0.0275373, 0.02514641, 0.02310702, 0.02310882, 0.02059692, 0.01913009, 0.01781686,
   0.01652115, 0.0159436, 0.01526245, 0.01456491, 0.01420158, 0.01382352, 0.01421735, 0.01323967, 0.01306401, 0.01289332, 0.0127701, 0.01264286, 0.0125609, 0.01249668, 0.01245723, 0.01271336 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehx3003[49] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehy3003[49] = { 21.76081, 16.34443, 6.858838, 3.575451, 2.00879, 2.125174, 1.421051, 1.018805, 0.1945518, 0.3964945, 0.2671595, 0.5136971, 0.2455945, 0.467594, 0.1559127, 0.1328969, 0.156174,
   0.1206176, 0.08710447, 0.1291964, 0.08644993, 0.07313153, 0.05088181, 0.04593326, 0.05360447, 0.04785007, 0.04815832, 0.04715176, 0.04381114, 0.04556365, 0.03722196, 0.03418123, 0.0327396,
   0.03181513, 0.03071574, 0.02934229, 0.02893024, 0.0275392, 0.02703935, 0.02783767, 0.02627042, 0.02589949, 0.02551611, 0.02521044, 0.02502101, 0.02490291, 0.02489386, 0.02474579, 0.02509728 };
   grae = new TGraphAsymmErrors(49,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fx3003,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fy3003,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_felx3003,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehx3003,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fely3003,tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003","",100,644.2,7577.8);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->SetMinimum(0.02890917);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->SetMaximum(78.31109);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__QBH_n1__Nom__SR__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_obs_fx2[49] = { 1222, 1333, 1667, 1889, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222, 3333, 3444,
   3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889, 5000, 5111, 5222,
   5333, 5444, 5556, 5667, 5778, 5889, 6000, 6111, 6222, 6333, 6444, 6556, 6667, 6778, 6889, 7000 };
   Double_t tgraph__QBH_n1__Nom__SR__phjet_m_obs_fy2[49] = { 65.4261, 33.02992, 30.87189, 7.39093, 4.740648, 4.482631, 4.87032, 5.257374, 4.123847, 3.021002, 2.350751, 1.544155, 1.086125, 0.7611091, 0.6310479, 0.527078, 0.4773655,
   0.4011483, 0.3234395, 0.2838313, 0.2512465, 0.2235884, 0.1974331, 0.1605383, 0.1367419, 0.1145538, 0.1043148, 0.09721068, 0.08663215, 0.08657896, 0.08191444, 0.07572968, 0.06653761,
   0.05884555, 0.05790214, 0.05049268, 0.0457738, 0.04670882, 0.04557036, 0.04580989, 0.04422646, 0.0439169, 0.04379105, 0.04132866, 0.04393819, 0.04415158, 0.04362476, 0.04354764, 0.04338399 };
   graph = new TGraph(49,tgraph__QBH_n1__Nom__SR__phjet_m_obs_fx2,tgraph__QBH_n1__Nom__SR__phjet_m_obs_fy2);
   graph->SetName("tgraph__QBH_n1__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2 = new TH1F("Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2","",100,644.2,7577.8);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->SetMinimum(0.0371958);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->SetMaximum(71.96457);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->SetLineColor(ci);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__QBH_n1__Nom__SR__phjet_m_obs2);
   
   graph->Draw(" plx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,644.2,7577.8);
   chist_copy__2->SetMinimum(0.0002724);
   chist_copy__2->SetMaximum(1.697275e+07);
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
