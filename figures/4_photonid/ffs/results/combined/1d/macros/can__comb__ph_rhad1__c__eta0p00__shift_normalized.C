#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad1__c__eta0p00__shift_normalized()
{
//=========Macro generated from canvas: c1_n17/
//=========  (Thu Apr  4 19:00:35 2024) by ROOT version 6.30/02
   TCanvas *c1_n17 = new TCanvas("c1_n17", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n17->SetHighLightColor(2);
   c1_n17->Range(0,0,1,1);
   c1_n17->SetFillColor(0);
   c1_n17->SetBorderMode(0);
   c1_n17->SetBorderSize(2);
   c1_n17->SetTickx(1);
   c1_n17->SetTicky(1);
   c1_n17->SetLeftMargin(0.16);
   c1_n17->SetRightMargin(0.05);
   c1_n17->SetTopMargin(0.05);
   c1_n17->SetBottomMargin(0.16);
   c1_n17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__488 = new TPad("dw", "dw",0,0,1,0.5);
   dw__488->Draw();
   dw__488->cd();
   dw__488->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__488->SetFillColor(0);
   dw__488->SetFillStyle(4000);
   dw__488->SetBorderMode(0);
   dw__488->SetBorderSize(0);
   dw__488->SetLogx();
   dw__488->SetTickx(1);
   dw__488->SetTicky(1);
   dw__488->SetLeftMargin(0.120603);
   dw__488->SetRightMargin(0.08040201);
   dw__488->SetTopMargin(0);
   dw__488->SetBottomMargin(0.2072539);
   dw__488->SetFrameBorderMode(0);
   dw__488->SetFrameBorderMode(0);
   Double_t xAxis2945[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__2945 = new TH1D("chist_dw__2945","",11, xAxis2945);
   chist_dw__2945->SetMinimum(0.2);
   chist_dw__2945->SetMaximum(3.2);
   chist_dw__2945->SetDirectory(nullptr);
   chist_dw__2945->SetStats(0);
   chist_dw__2945->SetLineColor(0);
   chist_dw__2945->SetLineWidth(0);
   chist_dw__2945->SetMarkerColor(0);
   chist_dw__2945->SetMarkerStyle(20);
   chist_dw__2945->SetMarkerSize(0);
   chist_dw__2945->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__2945->GetXaxis()->SetRange(1,8);
   chist_dw__2945->GetXaxis()->SetMoreLogLabels();
   chist_dw__2945->GetXaxis()->SetLabelFont(42);
   chist_dw__2945->GetXaxis()->SetLabelSize(0.08);
   chist_dw__2945->GetXaxis()->SetTitleSize(0.08);
   chist_dw__2945->GetXaxis()->SetTickLength(0.04);
   chist_dw__2945->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__2945->GetXaxis()->SetTitleFont(42);
   chist_dw__2945->GetYaxis()->SetTitle("Stretch");
   chist_dw__2945->GetYaxis()->CenterTitle(true);
   chist_dw__2945->GetYaxis()->SetNdivisions(405);
   chist_dw__2945->GetYaxis()->SetLabelFont(42);
   chist_dw__2945->GetYaxis()->SetLabelSize(0.08);
   chist_dw__2945->GetYaxis()->SetTitleSize(0.08);
   chist_dw__2945->GetYaxis()->SetTickLength(0.04);
   chist_dw__2945->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__2945->GetYaxis()->SetTitleFont(42);
   chist_dw__2945->GetZaxis()->SetLabelFont(42);
   chist_dw__2945->GetZaxis()->SetTitleOffset(1);
   chist_dw__2945->GetZaxis()->SetTitleFont(42);
   chist_dw__2945->Draw("");
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
   Double_t xAxis2946[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_1__2946 = new TH1D("RZ_stretch_tot_1__2946","",11, xAxis2946);
   RZ_stretch_tot_1__2946->SetBinContent(1,1.20665);
   RZ_stretch_tot_1__2946->SetBinContent(2,1.155448);
   RZ_stretch_tot_1__2946->SetBinContent(3,1.130323);
   RZ_stretch_tot_1__2946->SetBinContent(4,1.119062);
   RZ_stretch_tot_1__2946->SetBinError(1,0.04144537);
   RZ_stretch_tot_1__2946->SetBinError(2,0.03101803);
   RZ_stretch_tot_1__2946->SetBinError(3,0.03130528);
   RZ_stretch_tot_1__2946->SetBinError(4,0.04615415);
   RZ_stretch_tot_1__2946->SetEntries(3672.806);
   RZ_stretch_tot_1__2946->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_1__2946->SetFillColor(ci);
   RZ_stretch_tot_1__2946->SetLineWidth(2);
   RZ_stretch_tot_1__2946->SetMarkerStyle(20);
   RZ_stretch_tot_1__2946->SetMarkerSize(0.8);
   RZ_stretch_tot_1__2946->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_1__2946->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__2946->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_1__2946->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_1__2946->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_1__2946->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__2946->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__2946->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__2946->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__2946->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_1__2946->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__2946->Draw("SAME E2");
   Double_t xAxis2947[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_1__2947 = new TH1D("RZ_stretch_stat_1__2947","",11, xAxis2947);
   RZ_stretch_stat_1__2947->SetBinContent(1,1.20665);
   RZ_stretch_stat_1__2947->SetBinContent(2,1.155448);
   RZ_stretch_stat_1__2947->SetBinContent(3,1.130323);
   RZ_stretch_stat_1__2947->SetBinContent(4,1.119062);
   RZ_stretch_stat_1__2947->SetBinError(1,0.02963127);
   RZ_stretch_stat_1__2947->SetBinError(2,0.03087522);
   RZ_stretch_stat_1__2947->SetBinError(3,0.02831218);
   RZ_stretch_stat_1__2947->SetBinError(4,0.04514367);
   RZ_stretch_stat_1__2947->SetEntries(4552.898);
   RZ_stretch_stat_1__2947->SetStats(0);
   RZ_stretch_stat_1__2947->SetLineWidth(2);
   RZ_stretch_stat_1__2947->SetMarkerStyle(20);
   RZ_stretch_stat_1__2947->SetMarkerSize(0.8);
   RZ_stretch_stat_1__2947->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_1__2947->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__2947->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_1__2947->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_1__2947->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_1__2947->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__2947->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__2947->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__2947->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__2947->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_1__2947->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__2947->Draw("SAME PZ");
   Double_t xAxis2948[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_1__2948 = new TH1D("SP_stretch_tot_1__2948","",11, xAxis2948);
   SP_stretch_tot_1__2948->SetBinContent(5,1.137422);
   SP_stretch_tot_1__2948->SetBinContent(6,1.13151);
   SP_stretch_tot_1__2948->SetBinContent(7,1.111873);
   SP_stretch_tot_1__2948->SetBinContent(8,1.079845);
   SP_stretch_tot_1__2948->SetBinContent(9,1.023636);
   SP_stretch_tot_1__2948->SetBinContent(10,1.006582);
   SP_stretch_tot_1__2948->SetBinContent(11,1.119274);
   SP_stretch_tot_1__2948->SetBinError(5,0.001894922);
   SP_stretch_tot_1__2948->SetBinError(6,0.01088616);
   SP_stretch_tot_1__2948->SetBinError(7,0.0007524661);
   SP_stretch_tot_1__2948->SetBinError(8,0.05172909);
   SP_stretch_tot_1__2948->SetBinError(9,0.07379389);
   SP_stretch_tot_1__2948->SetBinError(10,0.2037295);
   SP_stretch_tot_1__2948->SetBinError(11,0.4417873);
   SP_stretch_tot_1__2948->SetEntries(236.4562);
   SP_stretch_tot_1__2948->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_1__2948->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_1__2948->SetLineColor(ci);
   SP_stretch_tot_1__2948->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_1__2948->SetMarkerColor(ci);
   SP_stretch_tot_1__2948->SetMarkerStyle(20);
   SP_stretch_tot_1__2948->SetMarkerSize(0.8);
   SP_stretch_tot_1__2948->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_1__2948->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_1__2948->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_1__2948->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_1__2948->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_1__2948->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_1__2948->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_1__2948->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_1__2948->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_1__2948->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_1__2948->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_1__2948->Draw("SAME E2");
   Double_t xAxis2949[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_1__2949 = new TH1D("SP_stretch_stat_1__2949","",11, xAxis2949);
   SP_stretch_stat_1__2949->SetBinContent(5,1.137422);
   SP_stretch_stat_1__2949->SetBinContent(6,1.13151);
   SP_stretch_stat_1__2949->SetBinContent(7,1.111873);
   SP_stretch_stat_1__2949->SetBinContent(8,1.079845);
   SP_stretch_stat_1__2949->SetBinContent(9,1.023636);
   SP_stretch_stat_1__2949->SetBinContent(10,1.006582);
   SP_stretch_stat_1__2949->SetBinContent(11,1.119274);
   SP_stretch_stat_1__2949->SetBinError(5,0.0003719003);
   SP_stretch_stat_1__2949->SetBinError(6,0.0005168966);
   SP_stretch_stat_1__2949->SetBinError(7,0.0005851273);
   SP_stretch_stat_1__2949->SetBinError(8,0.0006290654);
   SP_stretch_stat_1__2949->SetBinError(9,0.0003417826);
   SP_stretch_stat_1__2949->SetBinError(10,0.0007839663);
   SP_stretch_stat_1__2949->SetBinError(11,0.02092348);
   SP_stretch_stat_1__2949->SetEntries(131723);
   SP_stretch_stat_1__2949->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_1__2949->SetLineColor(ci);
   SP_stretch_stat_1__2949->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_1__2949->SetMarkerColor(ci);
   SP_stretch_stat_1__2949->SetMarkerStyle(20);
   SP_stretch_stat_1__2949->SetMarkerSize(0.8);
   SP_stretch_stat_1__2949->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_1__2949->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_1__2949->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_1__2949->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_1__2949->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_1__2949->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_1__2949->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_1__2949->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_1__2949->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_1__2949->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_1__2949->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_1__2949->Draw("SAME PZ");
   dw__488->Modified();
   c1_n17->cd();
  
// ------------>Primitives in pad: up
   TPad *up__489 = new TPad("up", "up",0,0.5,1,1);
   up__489->Draw();
   up__489->cd();
   up__489->Range(0.4143249,-0.7253224,3.986152,1.31102);
   up__489->SetFillColor(0);
   up__489->SetFillStyle(4000);
   up__489->SetBorderMode(0);
   up__489->SetBorderSize(0);
   up__489->SetLogx();
   up__489->SetTickx(1);
   up__489->SetTicky(1);
   up__489->SetLeftMargin(0.120603);
   up__489->SetRightMargin(0.08040201);
   up__489->SetBottomMargin(0.01243523);
   up__489->SetFrameBorderMode(0);
   up__489->SetFrameBorderMode(0);
   Double_t xAxis2950[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__2950 = new TH1D("chist__2950","",11, xAxis2950);
   chist__2950->SetMinimum(-0.7);
   chist__2950->SetMaximum(1.1);
   chist__2950->SetDirectory(nullptr);
   chist__2950->SetStats(0);
   chist__2950->SetLineColor(0);
   chist__2950->SetLineWidth(0);
   chist__2950->SetMarkerColor(0);
   chist__2950->SetMarkerStyle(20);
   chist__2950->SetMarkerSize(0);
   chist__2950->GetXaxis()->SetRange(1,8);
   chist__2950->GetXaxis()->SetNdivisions(4000510);
   chist__2950->GetXaxis()->SetLabelFont(42);
   chist__2950->GetXaxis()->SetLabelSize(0);
   chist__2950->GetXaxis()->SetTitleSize(0.08);
   chist__2950->GetXaxis()->SetTickLength(0.04);
   chist__2950->GetXaxis()->SetTitleOffset(2.020933);
   chist__2950->GetXaxis()->SetTitleFont(42);
   chist__2950->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__2950->GetYaxis()->SetNdivisions(3000510);
   chist__2950->GetYaxis()->SetLabelFont(42);
   chist__2950->GetYaxis()->SetLabelSize(0.08);
   chist__2950->GetYaxis()->SetTitleSize(0.08);
   chist__2950->GetYaxis()->SetTickLength(0.04);
   chist__2950->GetYaxis()->SetTitleOffset(0.727387);
   chist__2950->GetYaxis()->SetTitleFont(42);
   chist__2950->GetZaxis()->SetLabelFont(42);
   chist__2950->GetZaxis()->SetTitleOffset(1);
   chist__2950->GetZaxis()->SetTitleFont(42);
   chist__2950->Draw("pe");
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
      tex = new TLatex(0.160804,0.5098,"0.00 #leq |#eta^{#gamma}| < 0.60");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2951[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_1__2951 = new TH1D("RZ_shift_tot_1__2951","",11, xAxis2951);
   RZ_shift_tot_1__2951->SetBinContent(1,-0.06227714);
   RZ_shift_tot_1__2951->SetBinContent(2,-0.05388588);
   RZ_shift_tot_1__2951->SetBinContent(3,-0.05892662);
   RZ_shift_tot_1__2951->SetBinContent(4,-0.04865617);
   RZ_shift_tot_1__2951->SetBinError(1,0.01490468);
   RZ_shift_tot_1__2951->SetBinError(2,0.02260784);
   RZ_shift_tot_1__2951->SetBinError(3,0.0124979);
   RZ_shift_tot_1__2951->SetBinError(4,0.01818652);
   RZ_shift_tot_1__2951->SetEntries(41.02749);
   RZ_shift_tot_1__2951->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_1__2951->SetFillColor(ci);
   RZ_shift_tot_1__2951->SetMarkerStyle(20);
   RZ_shift_tot_1__2951->SetMarkerSize(0.8);
   RZ_shift_tot_1__2951->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_1__2951->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_1__2951->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_1__2951->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_1__2951->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_1__2951->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_1__2951->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_1__2951->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_1__2951->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_1__2951->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_1__2951->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_1__2951->Draw("SAME E2");
   Double_t xAxis2952[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_1__2952 = new TH1D("RZ_shift_stat_1__2952","",11, xAxis2952);
   RZ_shift_stat_1__2952->SetBinContent(1,-0.06227714);
   RZ_shift_stat_1__2952->SetBinContent(2,-0.05388588);
   RZ_shift_stat_1__2952->SetBinContent(3,-0.05892662);
   RZ_shift_stat_1__2952->SetBinContent(4,-0.04865617);
   RZ_shift_stat_1__2952->SetBinError(1,0.01039139);
   RZ_shift_stat_1__2952->SetBinError(2,0.01251326);
   RZ_shift_stat_1__2952->SetBinError(3,0.01067706);
   RZ_shift_stat_1__2952->SetBinError(4,0.01731157);
   RZ_shift_stat_1__2952->SetEntries(73.81053);
   RZ_shift_stat_1__2952->SetStats(0);
   RZ_shift_stat_1__2952->SetMarkerStyle(20);
   RZ_shift_stat_1__2952->SetMarkerSize(0.8);
   RZ_shift_stat_1__2952->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_1__2952->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_1__2952->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_1__2952->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_1__2952->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_1__2952->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_1__2952->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_1__2952->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_1__2952->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_1__2952->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_1__2952->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_1__2952->Draw("SAME PZ");
   Double_t xAxis2953[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_1__2953 = new TH1D("SP_shift_tot_1__2953","",11, xAxis2953);
   SP_shift_tot_1__2953->SetBinContent(5,-0.05960735);
   SP_shift_tot_1__2953->SetBinContent(6,-0.06032817);
   SP_shift_tot_1__2953->SetBinContent(7,-0.06268942);
   SP_shift_tot_1__2953->SetBinContent(8,-0.05551905);
   SP_shift_tot_1__2953->SetBinContent(9,-0.05713544);
   SP_shift_tot_1__2953->SetBinContent(10,-0.04386597);
   SP_shift_tot_1__2953->SetBinContent(11,-0.02660968);
   SP_shift_tot_1__2953->SetBinError(5,0.002323353);
   SP_shift_tot_1__2953->SetBinError(6,0.001966172);
   SP_shift_tot_1__2953->SetBinError(7,0.001942949);
   SP_shift_tot_1__2953->SetBinError(8,0.003390603);
   SP_shift_tot_1__2953->SetBinError(9,0.01173528);
   SP_shift_tot_1__2953->SetBinError(10,0.01421603);
   SP_shift_tot_1__2953->SetBinError(11,0.01648687);
   SP_shift_tot_1__2953->SetEntries(210.2864);
   SP_shift_tot_1__2953->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_1__2953->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_1__2953->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_1__2953->SetMarkerColor(ci);
   SP_shift_tot_1__2953->SetMarkerStyle(20);
   SP_shift_tot_1__2953->SetMarkerSize(0.8);
   SP_shift_tot_1__2953->GetXaxis()->SetRange(1,8);
   SP_shift_tot_1__2953->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_1__2953->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_1__2953->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_1__2953->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_1__2953->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_1__2953->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_1__2953->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_1__2953->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_1__2953->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_1__2953->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_1__2953->Draw("SAME E2");
   Double_t xAxis2954[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_1__2954 = new TH1D("SP_shift_stat_1__2954","",11, xAxis2954);
   SP_shift_stat_1__2954->SetBinContent(5,-0.05960735);
   SP_shift_stat_1__2954->SetBinContent(6,-0.06032817);
   SP_shift_stat_1__2954->SetBinContent(7,-0.06268942);
   SP_shift_stat_1__2954->SetBinContent(8,-0.05551905);
   SP_shift_stat_1__2954->SetBinContent(9,-0.05713544);
   SP_shift_stat_1__2954->SetBinContent(10,-0.04386597);
   SP_shift_stat_1__2954->SetBinContent(11,-0.02660968);
   SP_shift_stat_1__2954->SetBinError(5,0.0001499044);
   SP_shift_stat_1__2954->SetBinError(6,0.0001719953);
   SP_shift_stat_1__2954->SetBinError(7,0.0003260251);
   SP_shift_stat_1__2954->SetBinError(8,0.000420506);
   SP_shift_stat_1__2954->SetBinError(9,0.0007785515);
   SP_shift_stat_1__2954->SetBinError(10,0.003141147);
   SP_shift_stat_1__2954->SetBinError(11,0.008124344);
   SP_shift_stat_1__2954->SetEntries(1741.588);
   SP_shift_stat_1__2954->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_1__2954->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_1__2954->SetMarkerColor(ci);
   SP_shift_stat_1__2954->SetMarkerStyle(20);
   SP_shift_stat_1__2954->SetMarkerSize(0.8);
   SP_shift_stat_1__2954->GetXaxis()->SetRange(1,8);
   SP_shift_stat_1__2954->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_1__2954->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_1__2954->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_1__2954->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_1__2954->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_1__2954->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_1__2954->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_1__2954->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_1__2954->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_1__2954->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_1__2954->Draw("SAME PZ");
   Double_t xAxis2955[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__2955 = new TH1D("chist_copy__2955","",11, xAxis2955);
   chist_copy__2955->SetMinimum(-0.7);
   chist_copy__2955->SetMaximum(1.1);
   chist_copy__2955->SetDirectory(nullptr);
   chist_copy__2955->SetStats(0);
   chist_copy__2955->SetLineColor(0);
   chist_copy__2955->SetLineWidth(0);
   chist_copy__2955->SetMarkerColor(0);
   chist_copy__2955->SetMarkerStyle(20);
   chist_copy__2955->SetMarkerSize(0);
   chist_copy__2955->GetXaxis()->SetRange(1,8);
   chist_copy__2955->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2955->GetXaxis()->SetLabelFont(42);
   chist_copy__2955->GetXaxis()->SetLabelSize(0);
   chist_copy__2955->GetXaxis()->SetTitleSize(0.08);
   chist_copy__2955->GetXaxis()->SetTickLength(0.04);
   chist_copy__2955->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__2955->GetXaxis()->SetTitleFont(42);
   chist_copy__2955->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__2955->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2955->GetYaxis()->SetLabelFont(42);
   chist_copy__2955->GetYaxis()->SetLabelSize(0.08);
   chist_copy__2955->GetYaxis()->SetTitleSize(0.08);
   chist_copy__2955->GetYaxis()->SetTickLength(0.04);
   chist_copy__2955->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__2955->GetYaxis()->SetTitleFont(42);
   chist_copy__2955->GetZaxis()->SetLabelFont(42);
   chist_copy__2955->GetZaxis()->SetTitleOffset(1);
   chist_copy__2955->GetZaxis()->SetTitleFont(42);
   chist_copy__2955->Draw("sameaxis");
   up__489->Modified();
   c1_n17->cd();
   c1_n17->Modified();
   c1_n17->SetSelected(c1_n17);
}
