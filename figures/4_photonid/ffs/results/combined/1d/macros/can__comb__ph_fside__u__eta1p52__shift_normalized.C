#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_fside__u__eta1p52__shift_normalized()
{
//=========Macro generated from canvas: c1_n23/
//=========  (Thu Apr  4 19:00:40 2024) by ROOT version 6.30/02
   TCanvas *c1_n23 = new TCanvas("c1_n23", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n23->SetHighLightColor(2);
   c1_n23->Range(0,0,1,1);
   c1_n23->SetFillColor(0);
   c1_n23->SetBorderMode(0);
   c1_n23->SetBorderSize(2);
   c1_n23->SetTickx(1);
   c1_n23->SetTicky(1);
   c1_n23->SetLeftMargin(0.16);
   c1_n23->SetRightMargin(0.05);
   c1_n23->SetTopMargin(0.05);
   c1_n23->SetBottomMargin(0.16);
   c1_n23->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__564 = new TPad("dw", "dw",0,0,1,0.5);
   dw__564->Draw();
   dw__564->cd();
   dw__564->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__564->SetFillColor(0);
   dw__564->SetFillStyle(4000);
   dw__564->SetBorderMode(0);
   dw__564->SetBorderSize(0);
   dw__564->SetLogx();
   dw__564->SetTickx(1);
   dw__564->SetTicky(1);
   dw__564->SetLeftMargin(0.120603);
   dw__564->SetRightMargin(0.08040201);
   dw__564->SetTopMargin(0);
   dw__564->SetBottomMargin(0.2072539);
   dw__564->SetFrameBorderMode(0);
   dw__564->SetFrameBorderMode(0);
   Double_t xAxis3399[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__3399 = new TH1D("chist_dw__3399","",11, xAxis3399);
   chist_dw__3399->SetMinimum(0.2);
   chist_dw__3399->SetMaximum(3.2);
   chist_dw__3399->SetDirectory(nullptr);
   chist_dw__3399->SetStats(0);
   chist_dw__3399->SetLineColor(0);
   chist_dw__3399->SetLineWidth(0);
   chist_dw__3399->SetMarkerColor(0);
   chist_dw__3399->SetMarkerStyle(20);
   chist_dw__3399->SetMarkerSize(0);
   chist_dw__3399->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__3399->GetXaxis()->SetRange(1,8);
   chist_dw__3399->GetXaxis()->SetMoreLogLabels();
   chist_dw__3399->GetXaxis()->SetLabelFont(42);
   chist_dw__3399->GetXaxis()->SetLabelSize(0.08);
   chist_dw__3399->GetXaxis()->SetTitleSize(0.08);
   chist_dw__3399->GetXaxis()->SetTickLength(0.04);
   chist_dw__3399->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__3399->GetXaxis()->SetTitleFont(42);
   chist_dw__3399->GetYaxis()->SetTitle("Stretch");
   chist_dw__3399->GetYaxis()->CenterTitle(true);
   chist_dw__3399->GetYaxis()->SetNdivisions(405);
   chist_dw__3399->GetYaxis()->SetLabelFont(42);
   chist_dw__3399->GetYaxis()->SetLabelSize(0.08);
   chist_dw__3399->GetYaxis()->SetTitleSize(0.08);
   chist_dw__3399->GetYaxis()->SetTickLength(0.04);
   chist_dw__3399->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__3399->GetYaxis()->SetTitleFont(42);
   chist_dw__3399->GetZaxis()->SetLabelFont(42);
   chist_dw__3399->GetZaxis()->SetLabelSize(0.05);
   chist_dw__3399->GetZaxis()->SetTitleSize(0.05);
   chist_dw__3399->GetZaxis()->SetTitleOffset(1);
   chist_dw__3399->GetZaxis()->SetTitleFont(42);
   chist_dw__3399->Draw("");
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
   Double_t xAxis3400[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_6__3400 = new TH1D("RZ_stretch_tot_6__3400","",11, xAxis3400);
   RZ_stretch_tot_6__3400->SetBinContent(1,1.045303);
   RZ_stretch_tot_6__3400->SetBinContent(2,1.053309);
   RZ_stretch_tot_6__3400->SetBinContent(3,1.047336);
   RZ_stretch_tot_6__3400->SetBinContent(4,1.021849);
   RZ_stretch_tot_6__3400->SetBinError(1,0.02245447);
   RZ_stretch_tot_6__3400->SetBinError(2,0.02595481);
   RZ_stretch_tot_6__3400->SetBinError(3,0.0248868);
   RZ_stretch_tot_6__3400->SetBinError(4,0.03275402);
   RZ_stretch_tot_6__3400->SetEntries(6052.379);
   RZ_stretch_tot_6__3400->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_6__3400->SetFillColor(ci);
   RZ_stretch_tot_6__3400->SetLineWidth(2);
   RZ_stretch_tot_6__3400->SetMarkerStyle(20);
   RZ_stretch_tot_6__3400->SetMarkerSize(0.8);
   RZ_stretch_tot_6__3400->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_6__3400->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__3400->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__3400->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__3400->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__3400->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__3400->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__3400->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__3400->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__3400->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__3400->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__3400->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__3400->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__3400->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__3400->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_6__3400->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__3400->Draw("SAME E2");
   Double_t xAxis3401[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_6__3401 = new TH1D("RZ_stretch_stat_6__3401","",11, xAxis3401);
   RZ_stretch_stat_6__3401->SetBinContent(1,1.045303);
   RZ_stretch_stat_6__3401->SetBinContent(2,1.053309);
   RZ_stretch_stat_6__3401->SetBinContent(3,1.047336);
   RZ_stretch_stat_6__3401->SetBinContent(4,1.021849);
   RZ_stretch_stat_6__3401->SetBinError(1,0.01143005);
   RZ_stretch_stat_6__3401->SetBinError(2,0.01888699);
   RZ_stretch_stat_6__3401->SetBinError(3,0.01879631);
   RZ_stretch_stat_6__3401->SetBinError(4,0.03056506);
   RZ_stretch_stat_6__3401->SetEntries(9786.829);
   RZ_stretch_stat_6__3401->SetStats(0);
   RZ_stretch_stat_6__3401->SetLineWidth(2);
   RZ_stretch_stat_6__3401->SetMarkerStyle(20);
   RZ_stretch_stat_6__3401->SetMarkerSize(0.8);
   RZ_stretch_stat_6__3401->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_6__3401->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__3401->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__3401->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__3401->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__3401->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__3401->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__3401->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__3401->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__3401->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__3401->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__3401->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__3401->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__3401->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__3401->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_6__3401->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__3401->Draw("SAME PZ");
   Double_t xAxis3402[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_6__3402 = new TH1D("SP_stretch_tot_6__3402","",11, xAxis3402);
   SP_stretch_tot_6__3402->SetBinContent(5,1.068816);
   SP_stretch_tot_6__3402->SetBinContent(6,1.063844);
   SP_stretch_tot_6__3402->SetBinContent(7,1.064902);
   SP_stretch_tot_6__3402->SetBinContent(8,1.058542);
   SP_stretch_tot_6__3402->SetBinContent(9,1.115358);
   SP_stretch_tot_6__3402->SetBinContent(10,1.169005);
   SP_stretch_tot_6__3402->SetBinContent(11,1.181924);
   SP_stretch_tot_6__3402->SetBinError(5,0.01036355);
   SP_stretch_tot_6__3402->SetBinError(6,0.01004174);
   SP_stretch_tot_6__3402->SetBinError(7,0.008892439);
   SP_stretch_tot_6__3402->SetBinError(8,0.00994125);
   SP_stretch_tot_6__3402->SetBinError(9,0.01249697);
   SP_stretch_tot_6__3402->SetBinError(10,0.01790807);
   SP_stretch_tot_6__3402->SetBinError(11,0.04322852);
   SP_stretch_tot_6__3402->SetEntries(21830.67);
   SP_stretch_tot_6__3402->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_6__3402->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__3402->SetLineColor(ci);
   SP_stretch_tot_6__3402->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__3402->SetMarkerColor(ci);
   SP_stretch_tot_6__3402->SetMarkerStyle(20);
   SP_stretch_tot_6__3402->SetMarkerSize(0.8);
   SP_stretch_tot_6__3402->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_6__3402->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_6__3402->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__3402->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__3402->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__3402->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_6__3402->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_6__3402->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__3402->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__3402->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__3402->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_6__3402->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_6__3402->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__3402->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__3402->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_6__3402->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_6__3402->Draw("SAME E2");
   Double_t xAxis3403[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_6__3403 = new TH1D("SP_stretch_stat_6__3403","",11, xAxis3403);
   SP_stretch_stat_6__3403->SetBinContent(5,1.068816);
   SP_stretch_stat_6__3403->SetBinContent(6,1.063844);
   SP_stretch_stat_6__3403->SetBinContent(7,1.064902);
   SP_stretch_stat_6__3403->SetBinContent(8,1.058542);
   SP_stretch_stat_6__3403->SetBinContent(9,1.115358);
   SP_stretch_stat_6__3403->SetBinContent(10,1.169005);
   SP_stretch_stat_6__3403->SetBinContent(11,1.181924);
   SP_stretch_stat_6__3403->SetBinError(5,0.0002735364);
   SP_stretch_stat_6__3403->SetBinError(6,0.0003283855);
   SP_stretch_stat_6__3403->SetBinError(7,0.0006172902);
   SP_stretch_stat_6__3403->SetBinError(8,0.0008287409);
   SP_stretch_stat_6__3403->SetBinError(9,0.001372903);
   SP_stretch_stat_6__3403->SetBinError(10,0.008231033);
   SP_stretch_stat_6__3403->SetBinError(11,0.04321949);
   SP_stretch_stat_6__3403->SetEntries(30758.72);
   SP_stretch_stat_6__3403->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__3403->SetLineColor(ci);
   SP_stretch_stat_6__3403->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__3403->SetMarkerColor(ci);
   SP_stretch_stat_6__3403->SetMarkerStyle(20);
   SP_stretch_stat_6__3403->SetMarkerSize(0.8);
   SP_stretch_stat_6__3403->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_6__3403->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_6__3403->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__3403->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__3403->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__3403->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_6__3403->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_6__3403->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__3403->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__3403->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__3403->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_6__3403->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_6__3403->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__3403->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__3403->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_6__3403->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_6__3403->Draw("SAME PZ");
   dw__564->Modified();
   c1_n23->cd();
  
// ------------>Primitives in pad: up
   TPad *up__565 = new TPad("up", "up",0,0.5,1,1);
   up__565->Draw();
   up__565->cd();
   up__565->Range(0.4143249,-0.6365768,3.986152,2.304807);
   up__565->SetFillColor(0);
   up__565->SetFillStyle(4000);
   up__565->SetBorderMode(0);
   up__565->SetBorderSize(0);
   up__565->SetLogx();
   up__565->SetTickx(1);
   up__565->SetTicky(1);
   up__565->SetLeftMargin(0.120603);
   up__565->SetRightMargin(0.08040201);
   up__565->SetBottomMargin(0.01243523);
   up__565->SetFrameBorderMode(0);
   up__565->SetFrameBorderMode(0);
   Double_t xAxis3404[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__3404 = new TH1D("chist__3404","",11, xAxis3404);
   chist__3404->SetMinimum(-0.6);
   chist__3404->SetMaximum(2);
   chist__3404->SetDirectory(nullptr);
   chist__3404->SetStats(0);
   chist__3404->SetLineColor(0);
   chist__3404->SetLineWidth(0);
   chist__3404->SetMarkerColor(0);
   chist__3404->SetMarkerStyle(20);
   chist__3404->SetMarkerSize(0);
   chist__3404->GetXaxis()->SetRange(1,8);
   chist__3404->GetXaxis()->SetNdivisions(4000510);
   chist__3404->GetXaxis()->SetLabelFont(42);
   chist__3404->GetXaxis()->SetLabelSize(0);
   chist__3404->GetXaxis()->SetTitleSize(0.08);
   chist__3404->GetXaxis()->SetTickLength(0.04);
   chist__3404->GetXaxis()->SetTitleOffset(2.020933);
   chist__3404->GetXaxis()->SetTitleFont(42);
   chist__3404->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__3404->GetYaxis()->SetNdivisions(3000510);
   chist__3404->GetYaxis()->SetLabelFont(42);
   chist__3404->GetYaxis()->SetLabelSize(0.08);
   chist__3404->GetYaxis()->SetTitleSize(0.08);
   chist__3404->GetYaxis()->SetTickLength(0.04);
   chist__3404->GetYaxis()->SetTitleOffset(0.727387);
   chist__3404->GetYaxis()->SetTitleFont(42);
   chist__3404->GetZaxis()->SetLabelFont(42);
   chist__3404->GetZaxis()->SetLabelSize(0.05);
   chist__3404->GetZaxis()->SetTitleSize(0.05);
   chist__3404->GetZaxis()->SetTitleOffset(1);
   chist__3404->GetZaxis()->SetTitleFont(42);
   chist__3404->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"f_{side}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5714,"Unconverted #gamma");
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
   Double_t xAxis3405[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_6__3405 = new TH1D("RZ_shift_tot_6__3405","",11, xAxis3405);
   RZ_shift_tot_6__3405->SetBinContent(1,0.2312817);
   RZ_shift_tot_6__3405->SetBinContent(2,0.2660502);
   RZ_shift_tot_6__3405->SetBinContent(3,0.2796122);
   RZ_shift_tot_6__3405->SetBinContent(4,0.3106722);
   RZ_shift_tot_6__3405->SetBinError(1,0.01435093);
   RZ_shift_tot_6__3405->SetBinError(2,0.01845368);
   RZ_shift_tot_6__3405->SetBinError(3,0.01675625);
   RZ_shift_tot_6__3405->SetBinError(4,0.02654847);
   RZ_shift_tot_6__3405->SetEntries(772.0935);
   RZ_shift_tot_6__3405->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_6__3405->SetFillColor(ci);
   RZ_shift_tot_6__3405->SetMarkerStyle(20);
   RZ_shift_tot_6__3405->SetMarkerSize(0.8);
   RZ_shift_tot_6__3405->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_6__3405->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_6__3405->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__3405->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__3405->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__3405->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_6__3405->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_6__3405->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__3405->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__3405->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__3405->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_6__3405->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_6__3405->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__3405->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__3405->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_6__3405->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_6__3405->Draw("SAME E2");
   Double_t xAxis3406[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_6__3406 = new TH1D("RZ_shift_stat_6__3406","",11, xAxis3406);
   RZ_shift_stat_6__3406->SetBinContent(1,0.2312817);
   RZ_shift_stat_6__3406->SetBinContent(2,0.2660502);
   RZ_shift_stat_6__3406->SetBinContent(3,0.2796122);
   RZ_shift_stat_6__3406->SetBinContent(4,0.3106722);
   RZ_shift_stat_6__3406->SetBinError(1,0.008117108);
   RZ_shift_stat_6__3406->SetBinError(2,0.01434784);
   RZ_shift_stat_6__3406->SetBinError(3,0.01519932);
   RZ_shift_stat_6__3406->SetBinError(4,0.0257648);
   RZ_shift_stat_6__3406->SetEntries(1013.987);
   RZ_shift_stat_6__3406->SetStats(0);
   RZ_shift_stat_6__3406->SetMarkerStyle(20);
   RZ_shift_stat_6__3406->SetMarkerSize(0.8);
   RZ_shift_stat_6__3406->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_6__3406->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_6__3406->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__3406->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__3406->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__3406->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_6__3406->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_6__3406->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__3406->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__3406->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__3406->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_6__3406->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_6__3406->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__3406->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__3406->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_6__3406->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_6__3406->Draw("SAME PZ");
   Double_t xAxis3407[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_6__3407 = new TH1D("SP_shift_tot_6__3407","",11, xAxis3407);
   SP_shift_tot_6__3407->SetBinContent(5,0.4798602);
   SP_shift_tot_6__3407->SetBinContent(6,0.4705482);
   SP_shift_tot_6__3407->SetBinContent(7,0.4598859);
   SP_shift_tot_6__3407->SetBinContent(8,0.4557697);
   SP_shift_tot_6__3407->SetBinContent(9,0.4858004);
   SP_shift_tot_6__3407->SetBinContent(10,0.5190108);
   SP_shift_tot_6__3407->SetBinContent(11,0.5860619);
   SP_shift_tot_6__3407->SetBinError(5,0.02191067);
   SP_shift_tot_6__3407->SetBinError(6,0.01768295);
   SP_shift_tot_6__3407->SetBinError(7,0.01868857);
   SP_shift_tot_6__3407->SetBinError(8,0.01869836);
   SP_shift_tot_6__3407->SetBinError(9,0.01312431);
   SP_shift_tot_6__3407->SetBinError(10,0.01283163);
   SP_shift_tot_6__3407->SetBinError(11,0.02998483);
   SP_shift_tot_6__3407->SetEntries(4381.222);
   SP_shift_tot_6__3407->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_6__3407->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__3407->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__3407->SetMarkerColor(ci);
   SP_shift_tot_6__3407->SetMarkerStyle(20);
   SP_shift_tot_6__3407->SetMarkerSize(0.8);
   SP_shift_tot_6__3407->GetXaxis()->SetRange(1,8);
   SP_shift_tot_6__3407->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_6__3407->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__3407->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__3407->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__3407->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_6__3407->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_6__3407->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__3407->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__3407->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__3407->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_6__3407->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_6__3407->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__3407->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__3407->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_6__3407->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_6__3407->Draw("SAME E2");
   Double_t xAxis3408[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_6__3408 = new TH1D("SP_shift_stat_6__3408","",11, xAxis3408);
   SP_shift_stat_6__3408->SetBinContent(5,0.4798602);
   SP_shift_stat_6__3408->SetBinContent(6,0.4705482);
   SP_shift_stat_6__3408->SetBinContent(7,0.4598859);
   SP_shift_stat_6__3408->SetBinContent(8,0.4557697);
   SP_shift_stat_6__3408->SetBinContent(9,0.4858004);
   SP_shift_stat_6__3408->SetBinContent(10,0.5190108);
   SP_shift_stat_6__3408->SetBinContent(11,0.5860619);
   SP_shift_stat_6__3408->SetBinError(5,0.000281525);
   SP_shift_stat_6__3408->SetBinError(6,0.0003187782);
   SP_shift_stat_6__3408->SetBinError(7,0.000545022);
   SP_shift_stat_6__3408->SetBinError(8,0.0007207886);
   SP_shift_stat_6__3408->SetBinError(9,0.001205941);
   SP_shift_stat_6__3408->SetBinError(10,0.005093078);
   SP_shift_stat_6__3408->SetBinError(11,0.02995778);
   SP_shift_stat_6__3408->SetEntries(12907.37);
   SP_shift_stat_6__3408->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__3408->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__3408->SetMarkerColor(ci);
   SP_shift_stat_6__3408->SetMarkerStyle(20);
   SP_shift_stat_6__3408->SetMarkerSize(0.8);
   SP_shift_stat_6__3408->GetXaxis()->SetRange(1,8);
   SP_shift_stat_6__3408->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_6__3408->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__3408->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__3408->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__3408->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_6__3408->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_6__3408->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__3408->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__3408->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__3408->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_6__3408->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_6__3408->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__3408->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__3408->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_6__3408->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_6__3408->Draw("SAME PZ");
   Double_t xAxis3409[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__3409 = new TH1D("chist_copy__3409","",11, xAxis3409);
   chist_copy__3409->SetMinimum(-0.6);
   chist_copy__3409->SetMaximum(2);
   chist_copy__3409->SetDirectory(nullptr);
   chist_copy__3409->SetStats(0);
   chist_copy__3409->SetLineColor(0);
   chist_copy__3409->SetLineWidth(0);
   chist_copy__3409->SetMarkerColor(0);
   chist_copy__3409->SetMarkerStyle(20);
   chist_copy__3409->SetMarkerSize(0);
   chist_copy__3409->GetXaxis()->SetRange(1,8);
   chist_copy__3409->GetXaxis()->SetNdivisions(4000510);
   chist_copy__3409->GetXaxis()->SetLabelFont(42);
   chist_copy__3409->GetXaxis()->SetLabelSize(0);
   chist_copy__3409->GetXaxis()->SetTitleSize(0.08);
   chist_copy__3409->GetXaxis()->SetTickLength(0.04);
   chist_copy__3409->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__3409->GetXaxis()->SetTitleFont(42);
   chist_copy__3409->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__3409->GetYaxis()->SetNdivisions(3000510);
   chist_copy__3409->GetYaxis()->SetLabelFont(42);
   chist_copy__3409->GetYaxis()->SetLabelSize(0.08);
   chist_copy__3409->GetYaxis()->SetTitleSize(0.08);
   chist_copy__3409->GetYaxis()->SetTickLength(0.04);
   chist_copy__3409->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__3409->GetYaxis()->SetTitleFont(42);
   chist_copy__3409->GetZaxis()->SetLabelFont(42);
   chist_copy__3409->GetZaxis()->SetLabelSize(0.05);
   chist_copy__3409->GetZaxis()->SetTitleSize(0.05);
   chist_copy__3409->GetZaxis()->SetTitleOffset(1);
   chist_copy__3409->GetZaxis()->SetTitleFont(42);
   chist_copy__3409->Draw("sameaxis");
   up__565->Modified();
   c1_n23->cd();
   c1_n23->Modified();
   c1_n23->SetSelected(c1_n23);
}
