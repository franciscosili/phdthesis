#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad1__c__eta1p52__shift_normalized()
{
//=========Macro generated from canvas: c1_n19/
//=========  (Thu Apr  4 19:00:36 2024) by ROOT version 6.30/02
   TCanvas *c1_n19 = new TCanvas("c1_n19", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n19->SetHighLightColor(2);
   c1_n19->Range(0,0,1,1);
   c1_n19->SetFillColor(0);
   c1_n19->SetBorderMode(0);
   c1_n19->SetBorderSize(2);
   c1_n19->SetTickx(1);
   c1_n19->SetTicky(1);
   c1_n19->SetLeftMargin(0.16);
   c1_n19->SetRightMargin(0.05);
   c1_n19->SetTopMargin(0.05);
   c1_n19->SetBottomMargin(0.16);
   c1_n19->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__492 = new TPad("dw", "dw",0,0,1,0.5);
   dw__492->Draw();
   dw__492->cd();
   dw__492->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__492->SetFillColor(0);
   dw__492->SetFillStyle(4000);
   dw__492->SetBorderMode(0);
   dw__492->SetBorderSize(0);
   dw__492->SetLogx();
   dw__492->SetTickx(1);
   dw__492->SetTicky(1);
   dw__492->SetLeftMargin(0.120603);
   dw__492->SetRightMargin(0.08040201);
   dw__492->SetTopMargin(0);
   dw__492->SetBottomMargin(0.2072539);
   dw__492->SetFrameBorderMode(0);
   dw__492->SetFrameBorderMode(0);
   Double_t xAxis2967[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__2967 = new TH1D("chist_dw__2967","",11, xAxis2967);
   chist_dw__2967->SetMinimum(0.2);
   chist_dw__2967->SetMaximum(3.2);
   chist_dw__2967->SetDirectory(nullptr);
   chist_dw__2967->SetStats(0);
   chist_dw__2967->SetLineColor(0);
   chist_dw__2967->SetLineWidth(0);
   chist_dw__2967->SetMarkerColor(0);
   chist_dw__2967->SetMarkerStyle(20);
   chist_dw__2967->SetMarkerSize(0);
   chist_dw__2967->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__2967->GetXaxis()->SetRange(1,8);
   chist_dw__2967->GetXaxis()->SetMoreLogLabels();
   chist_dw__2967->GetXaxis()->SetLabelFont(42);
   chist_dw__2967->GetXaxis()->SetLabelSize(0.08);
   chist_dw__2967->GetXaxis()->SetTitleSize(0.08);
   chist_dw__2967->GetXaxis()->SetTickLength(0.04);
   chist_dw__2967->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__2967->GetXaxis()->SetTitleFont(42);
   chist_dw__2967->GetYaxis()->SetTitle("Stretch");
   chist_dw__2967->GetYaxis()->CenterTitle(true);
   chist_dw__2967->GetYaxis()->SetNdivisions(405);
   chist_dw__2967->GetYaxis()->SetLabelFont(42);
   chist_dw__2967->GetYaxis()->SetLabelSize(0.08);
   chist_dw__2967->GetYaxis()->SetTitleSize(0.08);
   chist_dw__2967->GetYaxis()->SetTickLength(0.04);
   chist_dw__2967->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__2967->GetYaxis()->SetTitleFont(42);
   chist_dw__2967->GetZaxis()->SetLabelFont(42);
   chist_dw__2967->GetZaxis()->SetLabelSize(0.05);
   chist_dw__2967->GetZaxis()->SetTitleSize(0.05);
   chist_dw__2967->GetZaxis()->SetTitleOffset(1);
   chist_dw__2967->GetZaxis()->SetTitleFont(42);
   chist_dw__2967->Draw("");
   TLine *line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   Double_t xAxis2968[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_6__2968 = new TH1D("RZ_stretch_tot_6__2968","",11, xAxis2968);
   RZ_stretch_tot_6__2968->SetBinContent(1,0.9903739);
   RZ_stretch_tot_6__2968->SetBinContent(2,1.003194);
   RZ_stretch_tot_6__2968->SetBinContent(3,1.0267);
   RZ_stretch_tot_6__2968->SetBinContent(4,1.034859);
   RZ_stretch_tot_6__2968->SetBinError(1,0.02465316);
   RZ_stretch_tot_6__2968->SetBinError(2,0.01497921);
   RZ_stretch_tot_6__2968->SetBinError(3,0.02552);
   RZ_stretch_tot_6__2968->SetBinError(4,0.03397757);
   RZ_stretch_tot_6__2968->SetEntries(6233.766);
   RZ_stretch_tot_6__2968->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_6__2968->SetFillColor(ci);
   RZ_stretch_tot_6__2968->SetLineWidth(2);
   RZ_stretch_tot_6__2968->SetMarkerStyle(20);
   RZ_stretch_tot_6__2968->SetMarkerSize(0.8);
   RZ_stretch_tot_6__2968->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_6__2968->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2968->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2968->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2968->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__2968->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2968->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2968->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2968->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2968->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__2968->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2968->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2968->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2968->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2968->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_6__2968->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2968->Draw("SAME E2");
   Double_t xAxis2969[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_6__2969 = new TH1D("RZ_stretch_stat_6__2969","",11, xAxis2969);
   RZ_stretch_stat_6__2969->SetBinContent(1,0.9903739);
   RZ_stretch_stat_6__2969->SetBinContent(2,1.003194);
   RZ_stretch_stat_6__2969->SetBinContent(3,1.0267);
   RZ_stretch_stat_6__2969->SetBinContent(4,1.034859);
   RZ_stretch_stat_6__2969->SetBinError(1,0.01711431);
   RZ_stretch_stat_6__2969->SetBinError(2,0.0141296);
   RZ_stretch_stat_6__2969->SetBinError(3,0.02167968);
   RZ_stretch_stat_6__2969->SetBinError(4,0.03270592);
   RZ_stretch_stat_6__2969->SetEntries(8091.63);
   RZ_stretch_stat_6__2969->SetStats(0);
   RZ_stretch_stat_6__2969->SetLineWidth(2);
   RZ_stretch_stat_6__2969->SetMarkerStyle(20);
   RZ_stretch_stat_6__2969->SetMarkerSize(0.8);
   RZ_stretch_stat_6__2969->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_6__2969->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2969->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2969->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2969->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__2969->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2969->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2969->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2969->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2969->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__2969->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2969->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2969->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2969->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2969->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_6__2969->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2969->Draw("SAME PZ");
   Double_t xAxis2970[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_6__2970 = new TH1D("SP_stretch_tot_6__2970","",11, xAxis2970);
   SP_stretch_tot_6__2970->SetBinContent(5,1.030771);
   SP_stretch_tot_6__2970->SetBinContent(6,1.05314);
   SP_stretch_tot_6__2970->SetBinContent(7,1.042624);
   SP_stretch_tot_6__2970->SetBinContent(8,1.030541);
   SP_stretch_tot_6__2970->SetBinContent(9,1.124898);
   SP_stretch_tot_6__2970->SetBinContent(10,1.248626);
   SP_stretch_tot_6__2970->SetBinContent(11,1.387309);
   SP_stretch_tot_6__2970->SetBinError(5,0.006054972);
   SP_stretch_tot_6__2970->SetBinError(6,0.01247561);
   SP_stretch_tot_6__2970->SetBinError(7,0.02123723);
   SP_stretch_tot_6__2970->SetBinError(8,0.03748685);
   SP_stretch_tot_6__2970->SetBinError(9,0.1052259);
   SP_stretch_tot_6__2970->SetBinError(10,0.3017835);
   SP_stretch_tot_6__2970->SetBinError(11,0.4671587);
   SP_stretch_tot_6__2970->SetEntries(194.4389);
   SP_stretch_tot_6__2970->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_6__2970->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__2970->SetLineColor(ci);
   SP_stretch_tot_6__2970->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__2970->SetMarkerColor(ci);
   SP_stretch_tot_6__2970->SetMarkerStyle(20);
   SP_stretch_tot_6__2970->SetMarkerSize(0.8);
   SP_stretch_tot_6__2970->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_6__2970->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2970->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2970->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2970->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__2970->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2970->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2970->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2970->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2970->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__2970->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2970->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2970->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2970->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2970->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_6__2970->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2970->Draw("SAME E2");
   Double_t xAxis2971[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_6__2971 = new TH1D("SP_stretch_stat_6__2971","",11, xAxis2971);
   SP_stretch_stat_6__2971->SetBinContent(5,1.030771);
   SP_stretch_stat_6__2971->SetBinContent(6,1.05314);
   SP_stretch_stat_6__2971->SetBinContent(7,1.042624);
   SP_stretch_stat_6__2971->SetBinContent(8,1.030541);
   SP_stretch_stat_6__2971->SetBinContent(9,1.124898);
   SP_stretch_stat_6__2971->SetBinContent(10,1.248626);
   SP_stretch_stat_6__2971->SetBinContent(11,1.387309);
   SP_stretch_stat_6__2971->SetBinError(5,0.0002954627);
   SP_stretch_stat_6__2971->SetBinError(6,0.0003518233);
   SP_stretch_stat_6__2971->SetBinError(7,0.0005972327);
   SP_stretch_stat_6__2971->SetBinError(8,0.0008510484);
   SP_stretch_stat_6__2971->SetBinError(9,0.0009498261);
   SP_stretch_stat_6__2971->SetBinError(10,0.001650731);
   SP_stretch_stat_6__2971->SetBinError(11,0.05408352);
   SP_stretch_stat_6__2971->SetEntries(21397.41);
   SP_stretch_stat_6__2971->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__2971->SetLineColor(ci);
   SP_stretch_stat_6__2971->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__2971->SetMarkerColor(ci);
   SP_stretch_stat_6__2971->SetMarkerStyle(20);
   SP_stretch_stat_6__2971->SetMarkerSize(0.8);
   SP_stretch_stat_6__2971->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_6__2971->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2971->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2971->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2971->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__2971->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2971->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2971->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2971->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2971->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__2971->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2971->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2971->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2971->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2971->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_6__2971->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2971->Draw("SAME PZ");
   dw__492->Modified();
   c1_n19->cd();
  
// ------------>Primitives in pad: up
   TPad *up__493 = new TPad("up", "up",0,0.5,1,1);
   up__493->Draw();
   up__493->cd();
   up__493->Range(0.4143249,-0.7253224,3.986152,1.31102);
   up__493->SetFillColor(0);
   up__493->SetFillStyle(4000);
   up__493->SetBorderMode(0);
   up__493->SetBorderSize(0);
   up__493->SetLogx();
   up__493->SetTickx(1);
   up__493->SetTicky(1);
   up__493->SetLeftMargin(0.120603);
   up__493->SetRightMargin(0.08040201);
   up__493->SetBottomMargin(0.01243523);
   up__493->SetFrameBorderMode(0);
   up__493->SetFrameBorderMode(0);
   Double_t xAxis2972[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__2972 = new TH1D("chist__2972","",11, xAxis2972);
   chist__2972->SetMinimum(-0.7);
   chist__2972->SetMaximum(1.1);
   chist__2972->SetDirectory(nullptr);
   chist__2972->SetStats(0);
   chist__2972->SetLineColor(0);
   chist__2972->SetLineWidth(0);
   chist__2972->SetMarkerColor(0);
   chist__2972->SetMarkerStyle(20);
   chist__2972->SetMarkerSize(0);
   chist__2972->GetXaxis()->SetRange(1,8);
   chist__2972->GetXaxis()->SetNdivisions(4000510);
   chist__2972->GetXaxis()->SetLabelFont(42);
   chist__2972->GetXaxis()->SetLabelSize(0);
   chist__2972->GetXaxis()->SetTitleSize(0.08);
   chist__2972->GetXaxis()->SetTickLength(0.04);
   chist__2972->GetXaxis()->SetTitleOffset(2.020933);
   chist__2972->GetXaxis()->SetTitleFont(42);
   chist__2972->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__2972->GetYaxis()->SetNdivisions(3000510);
   chist__2972->GetYaxis()->SetLabelFont(42);
   chist__2972->GetYaxis()->SetLabelSize(0.08);
   chist__2972->GetYaxis()->SetTitleSize(0.08);
   chist__2972->GetYaxis()->SetTickLength(0.04);
   chist__2972->GetYaxis()->SetTitleOffset(0.727387);
   chist__2972->GetYaxis()->SetTitleFont(42);
   chist__2972->GetZaxis()->SetLabelFont(42);
   chist__2972->GetZaxis()->SetLabelSize(0.05);
   chist__2972->GetZaxis()->SetTitleSize(0.05);
   chist__2972->GetZaxis()->SetTitleOffset(1);
   chist__2972->GetZaxis()->SetTitleFont(42);
   chist__2972->Draw("pe");
   TLatex *   tex = new TLatex(0.160804,0.809,"#bf{#it{ATLAS}} #scale[1.0]{Internal}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.721,"#sqrt{s} = 13 TeV, 140.07 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.064);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.4861809,0.523,0.879397,0.875,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03000911);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_6","RZ, Total unc., TUNE26","F");

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RZ_shift_stat_6","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_6","SP, Total unc., TUNE26","F");

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_stat_6","SP, Stat unc., TUNE26","PE");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.633,"R_{had1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5714,"Converted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"1.52 #leq |#eta^{#gamma}| < 1.81");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2973[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_6__2973 = new TH1D("RZ_shift_tot_6__2973","",11, xAxis2973);
   RZ_shift_tot_6__2973->SetBinContent(1,0.008990414);
   RZ_shift_tot_6__2973->SetBinContent(2,0.04220007);
   RZ_shift_tot_6__2973->SetBinContent(3,0.03233603);
   RZ_shift_tot_6__2973->SetBinContent(4,0.03543716);
   RZ_shift_tot_6__2973->SetBinError(1,0.06203768);
   RZ_shift_tot_6__2973->SetBinError(2,0.03304627);
   RZ_shift_tot_6__2973->SetBinError(3,0.02267362);
   RZ_shift_tot_6__2973->SetBinError(4,0.03150026);
   RZ_shift_tot_6__2973->SetEntries(2.195154);
   RZ_shift_tot_6__2973->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_6__2973->SetFillColor(ci);
   RZ_shift_tot_6__2973->SetMarkerStyle(20);
   RZ_shift_tot_6__2973->SetMarkerSize(0.8);
   RZ_shift_tot_6__2973->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_6__2973->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2973->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2973->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2973->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__2973->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2973->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2973->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2973->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2973->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__2973->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2973->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2973->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2973->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2973->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_6__2973->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2973->Draw("SAME E2");
   Double_t xAxis2974[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_6__2974 = new TH1D("RZ_shift_stat_6__2974","",11, xAxis2974);
   RZ_shift_stat_6__2974->SetBinContent(1,0.008990414);
   RZ_shift_stat_6__2974->SetBinContent(2,0.04220007);
   RZ_shift_stat_6__2974->SetBinContent(3,0.03233603);
   RZ_shift_stat_6__2974->SetBinContent(4,0.03543716);
   RZ_shift_stat_6__2974->SetBinError(1,0.03201662);
   RZ_shift_stat_6__2974->SetBinError(2,0.02106473);
   RZ_shift_stat_6__2974->SetBinError(3,0.01962485);
   RZ_shift_stat_6__2974->SetBinError(4,0.03044193);
   RZ_shift_stat_6__2974->SetEntries(5.089618);
   RZ_shift_stat_6__2974->SetStats(0);
   RZ_shift_stat_6__2974->SetMarkerStyle(20);
   RZ_shift_stat_6__2974->SetMarkerSize(0.8);
   RZ_shift_stat_6__2974->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_6__2974->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2974->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2974->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2974->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__2974->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2974->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2974->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2974->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2974->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__2974->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2974->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2974->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2974->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2974->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_6__2974->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2974->Draw("SAME PZ");
   Double_t xAxis2975[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_6__2975 = new TH1D("SP_shift_tot_6__2975","",11, xAxis2975);
   SP_shift_tot_6__2975->SetBinContent(5,0.04382089);
   SP_shift_tot_6__2975->SetBinContent(6,0.05761248);
   SP_shift_tot_6__2975->SetBinContent(7,0.0485998);
   SP_shift_tot_6__2975->SetBinContent(8,0.07537921);
   SP_shift_tot_6__2975->SetBinContent(9,0.06455296);
   SP_shift_tot_6__2975->SetBinContent(10,0.06452261);
   SP_shift_tot_6__2975->SetBinContent(11,0.1336997);
   SP_shift_tot_6__2975->SetBinError(5,0.01191232);
   SP_shift_tot_6__2975->SetBinError(6,0.01797914);
   SP_shift_tot_6__2975->SetBinError(7,0.02399794);
   SP_shift_tot_6__2975->SetBinError(8,0.03573934);
   SP_shift_tot_6__2975->SetBinError(9,0.05924512);
   SP_shift_tot_6__2975->SetBinError(10,0.07331656);
   SP_shift_tot_6__2975->SetBinError(11,0.1306419);
   SP_shift_tot_6__2975->SetEntries(8.430108);
   SP_shift_tot_6__2975->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_6__2975->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__2975->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__2975->SetMarkerColor(ci);
   SP_shift_tot_6__2975->SetMarkerStyle(20);
   SP_shift_tot_6__2975->SetMarkerSize(0.8);
   SP_shift_tot_6__2975->GetXaxis()->SetRange(1,8);
   SP_shift_tot_6__2975->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_6__2975->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2975->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2975->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__2975->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_6__2975->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_6__2975->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2975->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2975->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__2975->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_6__2975->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_6__2975->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2975->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2975->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_6__2975->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_6__2975->Draw("SAME E2");
   Double_t xAxis2976[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_6__2976 = new TH1D("SP_shift_stat_6__2976","",11, xAxis2976);
   SP_shift_stat_6__2976->SetBinContent(5,0.04382089);
   SP_shift_stat_6__2976->SetBinContent(6,0.05761248);
   SP_shift_stat_6__2976->SetBinContent(7,0.0485998);
   SP_shift_stat_6__2976->SetBinContent(8,0.07537921);
   SP_shift_stat_6__2976->SetBinContent(9,0.06455296);
   SP_shift_stat_6__2976->SetBinContent(10,0.06452261);
   SP_shift_stat_6__2976->SetBinContent(11,0.1336997);
   SP_shift_stat_6__2976->SetBinError(5,0.0002928196);
   SP_shift_stat_6__2976->SetBinError(6,0.0003307092);
   SP_shift_stat_6__2976->SetBinError(7,0.0005831605);
   SP_shift_stat_6__2976->SetBinError(8,0.000762599);
   SP_shift_stat_6__2976->SetBinError(9,0.001117215);
   SP_shift_stat_6__2976->SetBinError(10,0.003397156);
   SP_shift_stat_6__2976->SetBinError(11,0.01905571);
   SP_shift_stat_6__2976->SetEntries(632.1242);
   SP_shift_stat_6__2976->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__2976->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__2976->SetMarkerColor(ci);
   SP_shift_stat_6__2976->SetMarkerStyle(20);
   SP_shift_stat_6__2976->SetMarkerSize(0.8);
   SP_shift_stat_6__2976->GetXaxis()->SetRange(1,8);
   SP_shift_stat_6__2976->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_6__2976->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2976->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2976->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__2976->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_6__2976->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_6__2976->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2976->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2976->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__2976->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_6__2976->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_6__2976->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2976->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2976->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_6__2976->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_6__2976->Draw("SAME PZ");
   Double_t xAxis2977[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__2977 = new TH1D("chist_copy__2977","",11, xAxis2977);
   chist_copy__2977->SetMinimum(-0.7);
   chist_copy__2977->SetMaximum(1.1);
   chist_copy__2977->SetDirectory(nullptr);
   chist_copy__2977->SetStats(0);
   chist_copy__2977->SetLineColor(0);
   chist_copy__2977->SetLineWidth(0);
   chist_copy__2977->SetMarkerColor(0);
   chist_copy__2977->SetMarkerStyle(20);
   chist_copy__2977->SetMarkerSize(0);
   chist_copy__2977->GetXaxis()->SetRange(1,8);
   chist_copy__2977->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2977->GetXaxis()->SetLabelFont(42);
   chist_copy__2977->GetXaxis()->SetLabelSize(0);
   chist_copy__2977->GetXaxis()->SetTitleSize(0.08);
   chist_copy__2977->GetXaxis()->SetTickLength(0.04);
   chist_copy__2977->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__2977->GetXaxis()->SetTitleFont(42);
   chist_copy__2977->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__2977->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2977->GetYaxis()->SetLabelFont(42);
   chist_copy__2977->GetYaxis()->SetLabelSize(0.08);
   chist_copy__2977->GetYaxis()->SetTitleSize(0.08);
   chist_copy__2977->GetYaxis()->SetTickLength(0.04);
   chist_copy__2977->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__2977->GetYaxis()->SetTitleFont(42);
   chist_copy__2977->GetZaxis()->SetLabelFont(42);
   chist_copy__2977->GetZaxis()->SetLabelSize(0.05);
   chist_copy__2977->GetZaxis()->SetTitleSize(0.05);
   chist_copy__2977->GetZaxis()->SetTitleOffset(1);
   chist_copy__2977->GetZaxis()->SetTitleFont(42);
   chist_copy__2977->Draw("sameaxis");
   up__493->Modified();
   c1_n19->cd();
   c1_n19->Modified();
   c1_n19->SetSelected(c1_n19);
}
