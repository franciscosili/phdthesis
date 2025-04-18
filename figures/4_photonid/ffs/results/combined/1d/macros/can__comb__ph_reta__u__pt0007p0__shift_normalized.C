#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_reta__u__pt0007p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n8/
//=========  (Thu Apr  4 19:00:09 2024) by ROOT version 6.30/02
   TCanvas *c1_n8 = new TCanvas("c1_n8", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n8->SetHighLightColor(2);
   c1_n8->Range(0,0,1,1);
   c1_n8->SetFillColor(0);
   c1_n8->SetBorderMode(0);
   c1_n8->SetBorderSize(2);
   c1_n8->SetTickx(1);
   c1_n8->SetTicky(1);
   c1_n8->SetLeftMargin(0.16);
   c1_n8->SetRightMargin(0.05);
   c1_n8->SetTopMargin(0.05);
   c1_n8->SetBottomMargin(0.16);
   c1_n8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__50 = new TPad("dw", "dw",0,0,1,0.5);
   dw__50->Draw();
   dw__50->cd();
   dw__50->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__50->SetFillColor(0);
   dw__50->SetFillStyle(4000);
   dw__50->SetBorderMode(0);
   dw__50->SetBorderSize(0);
   dw__50->SetTickx(1);
   dw__50->SetTicky(1);
   dw__50->SetLeftMargin(0.120603);
   dw__50->SetRightMargin(0.08040201);
   dw__50->SetTopMargin(0);
   dw__50->SetBottomMargin(0.2072539);
   dw__50->SetFrameBorderMode(0);
   dw__50->SetFrameBorderMode(0);
   Double_t xAxis312[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__312 = new TH1D("chist_dw__312","",8, xAxis312);
   chist_dw__312->SetMinimum(0.2);
   chist_dw__312->SetMaximum(3.2);
   chist_dw__312->SetDirectory(nullptr);
   chist_dw__312->SetStats(0);
   chist_dw__312->SetLineColor(0);
   chist_dw__312->SetLineWidth(0);
   chist_dw__312->SetMarkerColor(0);
   chist_dw__312->SetMarkerStyle(20);
   chist_dw__312->SetMarkerSize(0);
   chist_dw__312->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__312->GetXaxis()->SetRange(1,11);
   chist_dw__312->GetXaxis()->SetLabelFont(42);
   chist_dw__312->GetXaxis()->SetLabelSize(0.08);
   chist_dw__312->GetXaxis()->SetTitleSize(0.08);
   chist_dw__312->GetXaxis()->SetTickLength(0.04);
   chist_dw__312->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__312->GetXaxis()->SetTitleFont(42);
   chist_dw__312->GetYaxis()->SetTitle("Stretch");
   chist_dw__312->GetYaxis()->CenterTitle(true);
   chist_dw__312->GetYaxis()->SetNdivisions(405);
   chist_dw__312->GetYaxis()->SetLabelFont(42);
   chist_dw__312->GetYaxis()->SetLabelSize(0.08);
   chist_dw__312->GetYaxis()->SetTitleSize(0.08);
   chist_dw__312->GetYaxis()->SetTickLength(0.04);
   chist_dw__312->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__312->GetYaxis()->SetTitleFont(42);
   chist_dw__312->GetZaxis()->SetLabelFont(42);
   chist_dw__312->GetZaxis()->SetTitleOffset(1);
   chist_dw__312->GetZaxis()->SetTitleFont(42);
   chist_dw__312->Draw("");
   TLine *line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   Double_t xAxis313[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_1__313 = new TH1D("RZ_stretch_tot_1__313","",8, xAxis313);
   RZ_stretch_tot_1__313->SetBinContent(1,0.8895338);
   RZ_stretch_tot_1__313->SetBinContent(2,0.9029163);
   RZ_stretch_tot_1__313->SetBinContent(3,0.9053843);
   RZ_stretch_tot_1__313->SetBinContent(4,0.8819727);
   RZ_stretch_tot_1__313->SetBinContent(6,0.9048423);
   RZ_stretch_tot_1__313->SetBinContent(7,0.8942401);
   RZ_stretch_tot_1__313->SetBinContent(8,0.9251732);
   RZ_stretch_tot_1__313->SetBinError(1,0.01244683);
   RZ_stretch_tot_1__313->SetBinError(2,0.04129102);
   RZ_stretch_tot_1__313->SetBinError(3,0.01426421);
   RZ_stretch_tot_1__313->SetBinError(4,0.02347118);
   RZ_stretch_tot_1__313->SetBinError(6,0.01625598);
   RZ_stretch_tot_1__313->SetBinError(7,0.01678161);
   RZ_stretch_tot_1__313->SetBinError(8,0.01952855);
   RZ_stretch_tot_1__313->SetEntries(11221.64);
   RZ_stretch_tot_1__313->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_1__313->SetFillColor(ci);
   RZ_stretch_tot_1__313->SetLineWidth(2);
   RZ_stretch_tot_1__313->SetMarkerStyle(20);
   RZ_stretch_tot_1__313->SetMarkerSize(0.8);
   RZ_stretch_tot_1__313->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_1__313->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__313->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__313->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__313->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__313->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__313->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_1__313->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__313->Draw("SAME E2");
   Double_t xAxis314[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_1__314 = new TH1D("RZ_stretch_stat_1__314","",8, xAxis314);
   RZ_stretch_stat_1__314->SetBinContent(1,0.8895338);
   RZ_stretch_stat_1__314->SetBinContent(2,0.9029163);
   RZ_stretch_stat_1__314->SetBinContent(3,0.9053843);
   RZ_stretch_stat_1__314->SetBinContent(4,0.8819727);
   RZ_stretch_stat_1__314->SetBinContent(6,0.9048423);
   RZ_stretch_stat_1__314->SetBinContent(7,0.8942401);
   RZ_stretch_stat_1__314->SetBinContent(8,0.9251732);
   RZ_stretch_stat_1__314->SetBinError(1,0.004415334);
   RZ_stretch_stat_1__314->SetBinError(2,0.009983393);
   RZ_stretch_stat_1__314->SetBinError(3,0.008134119);
   RZ_stretch_stat_1__314->SetBinError(4,0.01121456);
   RZ_stretch_stat_1__314->SetBinError(6,0.008040932);
   RZ_stretch_stat_1__314->SetBinError(7,0.01340193);
   RZ_stretch_stat_1__314->SetBinError(8,0.009828549);
   RZ_stretch_stat_1__314->SetEntries(60956.31);
   RZ_stretch_stat_1__314->SetStats(0);
   RZ_stretch_stat_1__314->SetLineWidth(2);
   RZ_stretch_stat_1__314->SetMarkerStyle(20);
   RZ_stretch_stat_1__314->SetMarkerSize(0.8);
   RZ_stretch_stat_1__314->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_1__314->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__314->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__314->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__314->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__314->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__314->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_1__314->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__314->Draw("SAME PZ");
   Double_t xAxis315[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_1__315 = new TH1D("SP_stretch_tot_1__315","",8, xAxis315);
   SP_stretch_tot_1__315->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_1__315->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_1__315->SetLineColor(ci);
   SP_stretch_tot_1__315->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_1__315->SetMarkerColor(ci);
   SP_stretch_tot_1__315->SetMarkerStyle(20);
   SP_stretch_tot_1__315->SetMarkerSize(0.8);
   SP_stretch_tot_1__315->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_1__315->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_1__315->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_1__315->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_1__315->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_1__315->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_1__315->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_1__315->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_1__315->Draw("SAME E2");
   Double_t xAxis316[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_1__316 = new TH1D("SP_stretch_stat_1__316","",8, xAxis316);
   SP_stretch_stat_1__316->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_1__316->SetLineColor(ci);
   SP_stretch_stat_1__316->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_1__316->SetMarkerColor(ci);
   SP_stretch_stat_1__316->SetMarkerStyle(20);
   SP_stretch_stat_1__316->SetMarkerSize(0.8);
   SP_stretch_stat_1__316->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_1__316->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_1__316->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_1__316->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_1__316->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_1__316->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_1__316->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_1__316->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_1__316->Draw("SAME PZ");
   dw__50->Modified();
   c1_n8->cd();
  
// ------------>Primitives in pad: up
   TPad *up__51 = new TPad("up", "up",0,0.5,1,1);
   up__51->Draw();
   up__51->cd();
   up__51->Range(-0.3577359,-1.646424,2.608491,2.08687);
   up__51->SetFillColor(0);
   up__51->SetFillStyle(4000);
   up__51->SetBorderMode(0);
   up__51->SetBorderSize(0);
   up__51->SetTickx(1);
   up__51->SetTicky(1);
   up__51->SetLeftMargin(0.120603);
   up__51->SetRightMargin(0.08040201);
   up__51->SetBottomMargin(0.01243523);
   up__51->SetFrameBorderMode(0);
   up__51->SetFrameBorderMode(0);
   Double_t xAxis317[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__317 = new TH1D("chist__317","",8, xAxis317);
   chist__317->SetMinimum(-1.6);
   chist__317->SetMaximum(1.7);
   chist__317->SetDirectory(nullptr);
   chist__317->SetStats(0);
   chist__317->SetLineColor(0);
   chist__317->SetLineWidth(0);
   chist__317->SetMarkerColor(0);
   chist__317->SetMarkerStyle(20);
   chist__317->SetMarkerSize(0);
   chist__317->GetXaxis()->SetRange(1,11);
   chist__317->GetXaxis()->SetNdivisions(4000510);
   chist__317->GetXaxis()->SetLabelFont(42);
   chist__317->GetXaxis()->SetLabelSize(0);
   chist__317->GetXaxis()->SetTitleSize(0.08);
   chist__317->GetXaxis()->SetTickLength(0.04);
   chist__317->GetXaxis()->SetTitleOffset(2.020933);
   chist__317->GetXaxis()->SetTitleFont(42);
   chist__317->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__317->GetYaxis()->SetNdivisions(3000510);
   chist__317->GetYaxis()->SetLabelFont(42);
   chist__317->GetYaxis()->SetLabelSize(0.08);
   chist__317->GetYaxis()->SetTitleSize(0.08);
   chist__317->GetYaxis()->SetTickLength(0.04);
   chist__317->GetYaxis()->SetTitleOffset(0.727387);
   chist__317->GetYaxis()->SetTitleFont(42);
   chist__317->GetZaxis()->SetLabelFont(42);
   chist__317->GetZaxis()->SetTitleOffset(1);
   chist__317->GetZaxis()->SetTitleFont(42);
   chist__317->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_1","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_1","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_1","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_1","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"R_{#eta}");
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
      tex = new TLatex(0.160804,0.5098,"7.00 #leq p_{T}^{#gamma} [GeV] < 15.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis318[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_1__318 = new TH1D("RZ_shift_tot_1__318","",8, xAxis318);
   RZ_shift_tot_1__318->SetBinContent(1,-0.08737661);
   RZ_shift_tot_1__318->SetBinContent(2,-0.09365687);
   RZ_shift_tot_1__318->SetBinContent(3,-0.1308551);
   RZ_shift_tot_1__318->SetBinContent(4,-0.1499612);
   RZ_shift_tot_1__318->SetBinContent(6,-0.1700001);
   RZ_shift_tot_1__318->SetBinContent(7,-0.1892166);
   RZ_shift_tot_1__318->SetBinContent(8,-0.2841527);
   RZ_shift_tot_1__318->SetBinError(1,0.01966211);
   RZ_shift_tot_1__318->SetBinError(2,0.03153892);
   RZ_shift_tot_1__318->SetBinError(3,0.01146563);
   RZ_shift_tot_1__318->SetBinError(4,0.0152999);
   RZ_shift_tot_1__318->SetBinError(6,0.01206841);
   RZ_shift_tot_1__318->SetBinError(7,0.01579922);
   RZ_shift_tot_1__318->SetBinError(8,0.0252587);
   RZ_shift_tot_1__318->SetEntries(439.3739);
   RZ_shift_tot_1__318->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_1__318->SetFillColor(ci);
   RZ_shift_tot_1__318->SetMarkerStyle(20);
   RZ_shift_tot_1__318->SetMarkerSize(0.8);
   RZ_shift_tot_1__318->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_1__318->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_1__318->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_1__318->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_1__318->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_1__318->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_1__318->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_1__318->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_1__318->Draw("SAME E2");
   Double_t xAxis319[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_1__319 = new TH1D("RZ_shift_stat_1__319","",8, xAxis319);
   RZ_shift_stat_1__319->SetBinContent(1,-0.08737661);
   RZ_shift_stat_1__319->SetBinContent(2,-0.09365687);
   RZ_shift_stat_1__319->SetBinContent(3,-0.1308551);
   RZ_shift_stat_1__319->SetBinContent(4,-0.1499612);
   RZ_shift_stat_1__319->SetBinContent(6,-0.1700001);
   RZ_shift_stat_1__319->SetBinContent(7,-0.1892166);
   RZ_shift_stat_1__319->SetBinContent(8,-0.2841527);
   RZ_shift_stat_1__319->SetBinError(1,0.004482051);
   RZ_shift_stat_1__319->SetBinError(2,0.008472137);
   RZ_shift_stat_1__319->SetBinError(3,0.006745662);
   RZ_shift_stat_1__319->SetBinError(4,0.01014718);
   RZ_shift_stat_1__319->SetBinError(6,0.007468803);
   RZ_shift_stat_1__319->SetBinError(7,0.01075213);
   RZ_shift_stat_1__319->SetBinError(8,0.009112327);
   RZ_shift_stat_1__319->SetEntries(2468.888);
   RZ_shift_stat_1__319->SetStats(0);
   RZ_shift_stat_1__319->SetMarkerStyle(20);
   RZ_shift_stat_1__319->SetMarkerSize(0.8);
   RZ_shift_stat_1__319->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_1__319->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_1__319->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_1__319->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_1__319->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_1__319->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_1__319->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_1__319->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_1__319->Draw("SAME PZ");
   Double_t xAxis320[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_1__320 = new TH1D("SP_shift_tot_1__320","",8, xAxis320);
   SP_shift_tot_1__320->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_1__320->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_1__320->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_1__320->SetMarkerColor(ci);
   SP_shift_tot_1__320->SetMarkerStyle(20);
   SP_shift_tot_1__320->SetMarkerSize(0.8);
   SP_shift_tot_1__320->GetXaxis()->SetRange(1,11);
   SP_shift_tot_1__320->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_1__320->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_1__320->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_1__320->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_1__320->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_1__320->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_1__320->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_1__320->Draw("SAME E2");
   Double_t xAxis321[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_1__321 = new TH1D("SP_shift_stat_1__321","",8, xAxis321);
   SP_shift_stat_1__321->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_1__321->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_1__321->SetMarkerColor(ci);
   SP_shift_stat_1__321->SetMarkerStyle(20);
   SP_shift_stat_1__321->SetMarkerSize(0.8);
   SP_shift_stat_1__321->GetXaxis()->SetRange(1,11);
   SP_shift_stat_1__321->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_1__321->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_1__321->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_1__321->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_1__321->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_1__321->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_1__321->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_1__321->Draw("SAME PZ");
   Double_t xAxis322[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__322 = new TH1D("chist_copy__322","",8, xAxis322);
   chist_copy__322->SetMinimum(-1.6);
   chist_copy__322->SetMaximum(1.7);
   chist_copy__322->SetDirectory(nullptr);
   chist_copy__322->SetStats(0);
   chist_copy__322->SetLineColor(0);
   chist_copy__322->SetLineWidth(0);
   chist_copy__322->SetMarkerColor(0);
   chist_copy__322->SetMarkerStyle(20);
   chist_copy__322->SetMarkerSize(0);
   chist_copy__322->GetXaxis()->SetRange(1,11);
   chist_copy__322->GetXaxis()->SetNdivisions(4000510);
   chist_copy__322->GetXaxis()->SetLabelFont(42);
   chist_copy__322->GetXaxis()->SetLabelSize(0);
   chist_copy__322->GetXaxis()->SetTitleSize(0.08);
   chist_copy__322->GetXaxis()->SetTickLength(0.04);
   chist_copy__322->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__322->GetXaxis()->SetTitleFont(42);
   chist_copy__322->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__322->GetYaxis()->SetNdivisions(3000510);
   chist_copy__322->GetYaxis()->SetLabelFont(42);
   chist_copy__322->GetYaxis()->SetLabelSize(0.08);
   chist_copy__322->GetYaxis()->SetTitleSize(0.08);
   chist_copy__322->GetYaxis()->SetTickLength(0.04);
   chist_copy__322->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__322->GetYaxis()->SetTitleFont(42);
   chist_copy__322->GetZaxis()->SetLabelFont(42);
   chist_copy__322->GetZaxis()->SetTitleOffset(1);
   chist_copy__322->GetZaxis()->SetTitleFont(42);
   chist_copy__322->Draw("sameaxis");
   up__51->Modified();
   c1_n8->cd();
   c1_n8->Modified();
   c1_n8->SetSelected(c1_n8);
}
