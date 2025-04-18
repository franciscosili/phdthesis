#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_fside__u__eta1p81__shift_normalized()
{
//=========Macro generated from canvas: c1_n24/
//=========  (Thu Apr  4 19:00:41 2024) by ROOT version 6.30/02
   TCanvas *c1_n24 = new TCanvas("c1_n24", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n24->SetHighLightColor(2);
   c1_n24->Range(0,0,1,1);
   c1_n24->SetFillColor(0);
   c1_n24->SetBorderMode(0);
   c1_n24->SetBorderSize(2);
   c1_n24->SetTickx(1);
   c1_n24->SetTicky(1);
   c1_n24->SetLeftMargin(0.16);
   c1_n24->SetRightMargin(0.05);
   c1_n24->SetTopMargin(0.05);
   c1_n24->SetBottomMargin(0.16);
   c1_n24->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__566 = new TPad("dw", "dw",0,0,1,0.5);
   dw__566->Draw();
   dw__566->cd();
   dw__566->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__566->SetFillColor(0);
   dw__566->SetFillStyle(4000);
   dw__566->SetBorderMode(0);
   dw__566->SetBorderSize(0);
   dw__566->SetLogx();
   dw__566->SetTickx(1);
   dw__566->SetTicky(1);
   dw__566->SetLeftMargin(0.120603);
   dw__566->SetRightMargin(0.08040201);
   dw__566->SetTopMargin(0);
   dw__566->SetBottomMargin(0.2072539);
   dw__566->SetFrameBorderMode(0);
   dw__566->SetFrameBorderMode(0);
   Double_t xAxis3410[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__3410 = new TH1D("chist_dw__3410","",11, xAxis3410);
   chist_dw__3410->SetMinimum(0.2);
   chist_dw__3410->SetMaximum(3.2);
   chist_dw__3410->SetDirectory(nullptr);
   chist_dw__3410->SetStats(0);
   chist_dw__3410->SetLineColor(0);
   chist_dw__3410->SetLineWidth(0);
   chist_dw__3410->SetMarkerColor(0);
   chist_dw__3410->SetMarkerStyle(20);
   chist_dw__3410->SetMarkerSize(0);
   chist_dw__3410->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__3410->GetXaxis()->SetRange(1,8);
   chist_dw__3410->GetXaxis()->SetMoreLogLabels();
   chist_dw__3410->GetXaxis()->SetLabelFont(42);
   chist_dw__3410->GetXaxis()->SetLabelSize(0.08);
   chist_dw__3410->GetXaxis()->SetTitleSize(0.08);
   chist_dw__3410->GetXaxis()->SetTickLength(0.04);
   chist_dw__3410->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__3410->GetXaxis()->SetTitleFont(42);
   chist_dw__3410->GetYaxis()->SetTitle("Stretch");
   chist_dw__3410->GetYaxis()->CenterTitle(true);
   chist_dw__3410->GetYaxis()->SetNdivisions(405);
   chist_dw__3410->GetYaxis()->SetLabelFont(42);
   chist_dw__3410->GetYaxis()->SetLabelSize(0.08);
   chist_dw__3410->GetYaxis()->SetTitleSize(0.08);
   chist_dw__3410->GetYaxis()->SetTickLength(0.04);
   chist_dw__3410->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__3410->GetYaxis()->SetTitleFont(42);
   chist_dw__3410->GetZaxis()->SetLabelFont(42);
   chist_dw__3410->GetZaxis()->SetLabelSize(0.05);
   chist_dw__3410->GetZaxis()->SetTitleSize(0.05);
   chist_dw__3410->GetZaxis()->SetTitleOffset(1);
   chist_dw__3410->GetZaxis()->SetTitleFont(42);
   chist_dw__3410->Draw("");
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
   Double_t xAxis3411[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_7__3411 = new TH1D("RZ_stretch_tot_7__3411","",11, xAxis3411);
   RZ_stretch_tot_7__3411->SetBinContent(1,1.097515);
   RZ_stretch_tot_7__3411->SetBinContent(2,1.093814);
   RZ_stretch_tot_7__3411->SetBinContent(3,1.090326);
   RZ_stretch_tot_7__3411->SetBinContent(4,1.111764);
   RZ_stretch_tot_7__3411->SetBinError(1,0.03023369);
   RZ_stretch_tot_7__3411->SetBinError(2,0.02997621);
   RZ_stretch_tot_7__3411->SetBinError(3,0.02877513);
   RZ_stretch_tot_7__3411->SetBinError(4,0.04763692);
   RZ_stretch_tot_7__3411->SetEntries(3931.242);
   RZ_stretch_tot_7__3411->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_7__3411->SetFillColor(ci);
   RZ_stretch_tot_7__3411->SetLineWidth(2);
   RZ_stretch_tot_7__3411->SetMarkerStyle(20);
   RZ_stretch_tot_7__3411->SetMarkerSize(0.8);
   RZ_stretch_tot_7__3411->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_7__3411->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__3411->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__3411->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__3411->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__3411->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__3411->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__3411->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__3411->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__3411->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__3411->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__3411->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__3411->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__3411->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__3411->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_7__3411->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__3411->Draw("SAME E2");
   Double_t xAxis3412[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_7__3412 = new TH1D("RZ_stretch_stat_7__3412","",11, xAxis3412);
   RZ_stretch_stat_7__3412->SetBinContent(1,1.097515);
   RZ_stretch_stat_7__3412->SetBinContent(2,1.093814);
   RZ_stretch_stat_7__3412->SetBinContent(3,1.090326);
   RZ_stretch_stat_7__3412->SetBinContent(4,1.111764);
   RZ_stretch_stat_7__3412->SetBinError(1,0.01588185);
   RZ_stretch_stat_7__3412->SetBinError(2,0.02452228);
   RZ_stretch_stat_7__3412->SetBinError(3,0.02430911);
   RZ_stretch_stat_7__3412->SetBinError(4,0.04405784);
   RZ_stretch_stat_7__3412->SetEntries(5701.243);
   RZ_stretch_stat_7__3412->SetStats(0);
   RZ_stretch_stat_7__3412->SetLineWidth(2);
   RZ_stretch_stat_7__3412->SetMarkerStyle(20);
   RZ_stretch_stat_7__3412->SetMarkerSize(0.8);
   RZ_stretch_stat_7__3412->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_7__3412->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__3412->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__3412->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__3412->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__3412->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__3412->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__3412->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__3412->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__3412->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__3412->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__3412->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__3412->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__3412->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__3412->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_7__3412->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__3412->Draw("SAME PZ");
   Double_t xAxis3413[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_7__3413 = new TH1D("SP_stretch_tot_7__3413","",11, xAxis3413);
   SP_stretch_tot_7__3413->SetBinContent(5,1.191839);
   SP_stretch_tot_7__3413->SetBinContent(6,1.201874);
   SP_stretch_tot_7__3413->SetBinContent(7,1.212458);
   SP_stretch_tot_7__3413->SetBinContent(8,1.204957);
   SP_stretch_tot_7__3413->SetBinContent(9,1.243189);
   SP_stretch_tot_7__3413->SetBinContent(10,1.235527);
   SP_stretch_tot_7__3413->SetBinContent(11,1.213388);
   SP_stretch_tot_7__3413->SetBinError(5,0.01236967);
   SP_stretch_tot_7__3413->SetBinError(6,0.01174577);
   SP_stretch_tot_7__3413->SetBinError(7,0.01022189);
   SP_stretch_tot_7__3413->SetBinError(8,0.02093962);
   SP_stretch_tot_7__3413->SetBinError(9,0.01174858);
   SP_stretch_tot_7__3413->SetBinError(10,0.01909053);
   SP_stretch_tot_7__3413->SetBinError(11,0.08104057);
   SP_stretch_tot_7__3413->SetEntries(9147.918);
   SP_stretch_tot_7__3413->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_7__3413->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__3413->SetLineColor(ci);
   SP_stretch_tot_7__3413->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__3413->SetMarkerColor(ci);
   SP_stretch_tot_7__3413->SetMarkerStyle(20);
   SP_stretch_tot_7__3413->SetMarkerSize(0.8);
   SP_stretch_tot_7__3413->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_7__3413->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_7__3413->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__3413->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__3413->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__3413->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_7__3413->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_7__3413->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__3413->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__3413->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__3413->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_7__3413->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_7__3413->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__3413->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__3413->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_7__3413->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_7__3413->Draw("SAME E2");
   Double_t xAxis3414[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_7__3414 = new TH1D("SP_stretch_stat_7__3414","",11, xAxis3414);
   SP_stretch_stat_7__3414->SetBinContent(5,1.191839);
   SP_stretch_stat_7__3414->SetBinContent(6,1.201874);
   SP_stretch_stat_7__3414->SetBinContent(7,1.212458);
   SP_stretch_stat_7__3414->SetBinContent(8,1.204957);
   SP_stretch_stat_7__3414->SetBinContent(9,1.243189);
   SP_stretch_stat_7__3414->SetBinContent(10,1.235527);
   SP_stretch_stat_7__3414->SetBinContent(11,1.213388);
   SP_stretch_stat_7__3414->SetBinError(5,0.0004708674);
   SP_stretch_stat_7__3414->SetBinError(6,0.0003973202);
   SP_stretch_stat_7__3414->SetBinError(7,0.0007112305);
   SP_stretch_stat_7__3414->SetBinError(8,0.0009080674);
   SP_stretch_stat_7__3414->SetBinError(9,0.001604615);
   SP_stretch_stat_7__3414->SetBinError(10,0.007978714);
   SP_stretch_stat_7__3414->SetBinError(11,0.0794941);
   SP_stretch_stat_7__3414->SetEntries(11320.19);
   SP_stretch_stat_7__3414->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__3414->SetLineColor(ci);
   SP_stretch_stat_7__3414->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__3414->SetMarkerColor(ci);
   SP_stretch_stat_7__3414->SetMarkerStyle(20);
   SP_stretch_stat_7__3414->SetMarkerSize(0.8);
   SP_stretch_stat_7__3414->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_7__3414->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_7__3414->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__3414->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__3414->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__3414->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_7__3414->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_7__3414->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__3414->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__3414->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__3414->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_7__3414->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_7__3414->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__3414->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__3414->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_7__3414->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_7__3414->Draw("SAME PZ");
   dw__566->Modified();
   c1_n24->cd();
  
// ------------>Primitives in pad: up
   TPad *up__567 = new TPad("up", "up",0,0.5,1,1);
   up__567->Draw();
   up__567->cd();
   up__567->Range(0.4143249,-0.6365768,3.986152,2.304807);
   up__567->SetFillColor(0);
   up__567->SetFillStyle(4000);
   up__567->SetBorderMode(0);
   up__567->SetBorderSize(0);
   up__567->SetLogx();
   up__567->SetTickx(1);
   up__567->SetTicky(1);
   up__567->SetLeftMargin(0.120603);
   up__567->SetRightMargin(0.08040201);
   up__567->SetBottomMargin(0.01243523);
   up__567->SetFrameBorderMode(0);
   up__567->SetFrameBorderMode(0);
   Double_t xAxis3415[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__3415 = new TH1D("chist__3415","",11, xAxis3415);
   chist__3415->SetMinimum(-0.6);
   chist__3415->SetMaximum(2);
   chist__3415->SetDirectory(nullptr);
   chist__3415->SetStats(0);
   chist__3415->SetLineColor(0);
   chist__3415->SetLineWidth(0);
   chist__3415->SetMarkerColor(0);
   chist__3415->SetMarkerStyle(20);
   chist__3415->SetMarkerSize(0);
   chist__3415->GetXaxis()->SetRange(1,8);
   chist__3415->GetXaxis()->SetNdivisions(4000510);
   chist__3415->GetXaxis()->SetLabelFont(42);
   chist__3415->GetXaxis()->SetLabelSize(0);
   chist__3415->GetXaxis()->SetTitleSize(0.08);
   chist__3415->GetXaxis()->SetTickLength(0.04);
   chist__3415->GetXaxis()->SetTitleOffset(2.020933);
   chist__3415->GetXaxis()->SetTitleFont(42);
   chist__3415->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__3415->GetYaxis()->SetNdivisions(3000510);
   chist__3415->GetYaxis()->SetLabelFont(42);
   chist__3415->GetYaxis()->SetLabelSize(0.08);
   chist__3415->GetYaxis()->SetTitleSize(0.08);
   chist__3415->GetYaxis()->SetTickLength(0.04);
   chist__3415->GetYaxis()->SetTitleOffset(0.727387);
   chist__3415->GetYaxis()->SetTitleFont(42);
   chist__3415->GetZaxis()->SetLabelFont(42);
   chist__3415->GetZaxis()->SetLabelSize(0.05);
   chist__3415->GetZaxis()->SetTitleSize(0.05);
   chist__3415->GetZaxis()->SetTitleOffset(1);
   chist__3415->GetZaxis()->SetTitleFont(42);
   chist__3415->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_7","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_7","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_7","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_7","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.5098,"1.81 #leq |#eta^{#gamma}| < 2.01");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis3416[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_7__3416 = new TH1D("RZ_shift_tot_7__3416","",11, xAxis3416);
   RZ_shift_tot_7__3416->SetBinContent(1,0.442374);
   RZ_shift_tot_7__3416->SetBinContent(2,0.5621068);
   RZ_shift_tot_7__3416->SetBinContent(3,0.602843);
   RZ_shift_tot_7__3416->SetBinContent(4,0.6246106);
   RZ_shift_tot_7__3416->SetBinError(1,0.01180334);
   RZ_shift_tot_7__3416->SetBinError(2,0.016603);
   RZ_shift_tot_7__3416->SetBinError(3,0.02085853);
   RZ_shift_tot_7__3416->SetBinError(4,0.02913454);
   RZ_shift_tot_7__3416->SetEntries(2932.247);
   RZ_shift_tot_7__3416->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_7__3416->SetFillColor(ci);
   RZ_shift_tot_7__3416->SetMarkerStyle(20);
   RZ_shift_tot_7__3416->SetMarkerSize(0.8);
   RZ_shift_tot_7__3416->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_7__3416->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_7__3416->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__3416->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__3416->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__3416->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_7__3416->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_7__3416->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__3416->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__3416->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__3416->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_7__3416->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_7__3416->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__3416->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__3416->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_7__3416->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_7__3416->Draw("SAME E2");
   Double_t xAxis3417[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_7__3417 = new TH1D("RZ_shift_stat_7__3417","",11, xAxis3417);
   RZ_shift_stat_7__3417->SetBinContent(1,0.442374);
   RZ_shift_stat_7__3417->SetBinContent(2,0.5621068);
   RZ_shift_stat_7__3417->SetBinContent(3,0.602843);
   RZ_shift_stat_7__3417->SetBinContent(4,0.6246106);
   RZ_shift_stat_7__3417->SetBinError(1,0.008679766);
   RZ_shift_stat_7__3417->SetBinError(2,0.01565137);
   RZ_shift_stat_7__3417->SetBinError(3,0.01609626);
   RZ_shift_stat_7__3417->SetBinError(4,0.0279448);
   RZ_shift_stat_7__3417->SetEntries(3662.07);
   RZ_shift_stat_7__3417->SetStats(0);
   RZ_shift_stat_7__3417->SetMarkerStyle(20);
   RZ_shift_stat_7__3417->SetMarkerSize(0.8);
   RZ_shift_stat_7__3417->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_7__3417->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_7__3417->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__3417->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__3417->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__3417->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_7__3417->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_7__3417->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__3417->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__3417->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__3417->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_7__3417->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_7__3417->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__3417->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__3417->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_7__3417->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_7__3417->Draw("SAME PZ");
   Double_t xAxis3418[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_7__3418 = new TH1D("SP_shift_tot_7__3418","",11, xAxis3418);
   SP_shift_tot_7__3418->SetBinContent(5,1.152831);
   SP_shift_tot_7__3418->SetBinContent(6,1.198095);
   SP_shift_tot_7__3418->SetBinContent(7,1.2101);
   SP_shift_tot_7__3418->SetBinContent(8,1.222779);
   SP_shift_tot_7__3418->SetBinContent(9,1.226337);
   SP_shift_tot_7__3418->SetBinContent(10,1.168875);
   SP_shift_tot_7__3418->SetBinContent(11,1.081546);
   SP_shift_tot_7__3418->SetBinError(5,0.02258917);
   SP_shift_tot_7__3418->SetBinError(6,0.02215109);
   SP_shift_tot_7__3418->SetBinError(7,0.01888648);
   SP_shift_tot_7__3418->SetBinError(8,0.0235508);
   SP_shift_tot_7__3418->SetBinError(9,0.01789802);
   SP_shift_tot_7__3418->SetBinError(10,0.01261704);
   SP_shift_tot_7__3418->SetBinError(11,0.04790458);
   SP_shift_tot_7__3418->SetEntries(14559.82);
   SP_shift_tot_7__3418->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_7__3418->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__3418->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__3418->SetMarkerColor(ci);
   SP_shift_tot_7__3418->SetMarkerStyle(20);
   SP_shift_tot_7__3418->SetMarkerSize(0.8);
   SP_shift_tot_7__3418->GetXaxis()->SetRange(1,8);
   SP_shift_tot_7__3418->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_7__3418->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__3418->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__3418->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__3418->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_7__3418->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_7__3418->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__3418->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__3418->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__3418->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_7__3418->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_7__3418->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__3418->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__3418->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_7__3418->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_7__3418->Draw("SAME E2");
   Double_t xAxis3419[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_7__3419 = new TH1D("SP_shift_stat_7__3419","",11, xAxis3419);
   SP_shift_stat_7__3419->SetBinContent(5,1.152831);
   SP_shift_stat_7__3419->SetBinContent(6,1.198095);
   SP_shift_stat_7__3419->SetBinContent(7,1.2101);
   SP_shift_stat_7__3419->SetBinContent(8,1.222779);
   SP_shift_stat_7__3419->SetBinContent(9,1.226337);
   SP_shift_stat_7__3419->SetBinContent(10,1.168875);
   SP_shift_stat_7__3419->SetBinContent(11,1.081546);
   SP_shift_stat_7__3419->SetBinError(5,0.0003413677);
   SP_shift_stat_7__3419->SetBinError(6,0.0003843065);
   SP_shift_stat_7__3419->SetBinError(7,0.0006937236);
   SP_shift_stat_7__3419->SetBinError(8,0.0008938332);
   SP_shift_stat_7__3419->SetBinError(9,0.001532423);
   SP_shift_stat_7__3419->SetBinError(10,0.00623813);
   SP_shift_stat_7__3419->SetBinError(11,0.04686297);
   SP_shift_stat_7__3419->SetEntries(30477.26);
   SP_shift_stat_7__3419->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__3419->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__3419->SetMarkerColor(ci);
   SP_shift_stat_7__3419->SetMarkerStyle(20);
   SP_shift_stat_7__3419->SetMarkerSize(0.8);
   SP_shift_stat_7__3419->GetXaxis()->SetRange(1,8);
   SP_shift_stat_7__3419->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_7__3419->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__3419->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__3419->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__3419->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_7__3419->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_7__3419->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__3419->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__3419->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__3419->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_7__3419->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_7__3419->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__3419->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__3419->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_7__3419->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_7__3419->Draw("SAME PZ");
   Double_t xAxis3420[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__3420 = new TH1D("chist_copy__3420","",11, xAxis3420);
   chist_copy__3420->SetMinimum(-0.6);
   chist_copy__3420->SetMaximum(2);
   chist_copy__3420->SetDirectory(nullptr);
   chist_copy__3420->SetStats(0);
   chist_copy__3420->SetLineColor(0);
   chist_copy__3420->SetLineWidth(0);
   chist_copy__3420->SetMarkerColor(0);
   chist_copy__3420->SetMarkerStyle(20);
   chist_copy__3420->SetMarkerSize(0);
   chist_copy__3420->GetXaxis()->SetRange(1,8);
   chist_copy__3420->GetXaxis()->SetNdivisions(4000510);
   chist_copy__3420->GetXaxis()->SetLabelFont(42);
   chist_copy__3420->GetXaxis()->SetLabelSize(0);
   chist_copy__3420->GetXaxis()->SetTitleSize(0.08);
   chist_copy__3420->GetXaxis()->SetTickLength(0.04);
   chist_copy__3420->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__3420->GetXaxis()->SetTitleFont(42);
   chist_copy__3420->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__3420->GetYaxis()->SetNdivisions(3000510);
   chist_copy__3420->GetYaxis()->SetLabelFont(42);
   chist_copy__3420->GetYaxis()->SetLabelSize(0.08);
   chist_copy__3420->GetYaxis()->SetTitleSize(0.08);
   chist_copy__3420->GetYaxis()->SetTickLength(0.04);
   chist_copy__3420->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__3420->GetYaxis()->SetTitleFont(42);
   chist_copy__3420->GetZaxis()->SetLabelFont(42);
   chist_copy__3420->GetZaxis()->SetLabelSize(0.05);
   chist_copy__3420->GetZaxis()->SetTitleSize(0.05);
   chist_copy__3420->GetZaxis()->SetTitleOffset(1);
   chist_copy__3420->GetZaxis()->SetTitleFont(42);
   chist_copy__3420->Draw("sameaxis");
   up__567->Modified();
   c1_n24->cd();
   c1_n24->Modified();
   c1_n24->SetSelected(c1_n24);
}
