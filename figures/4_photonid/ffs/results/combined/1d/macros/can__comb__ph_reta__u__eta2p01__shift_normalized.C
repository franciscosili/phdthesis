#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_reta__u__eta2p01__shift_normalized()
{
//=========Macro generated from canvas: c1_n7/
//=========  (Thu Apr  4 19:00:09 2024) by ROOT version 6.30/02
   TCanvas *c1_n7 = new TCanvas("c1_n7", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n7->SetHighLightColor(2);
   c1_n7->Range(0,0,1,1);
   c1_n7->SetFillColor(0);
   c1_n7->SetBorderMode(0);
   c1_n7->SetBorderSize(2);
   c1_n7->SetTickx(1);
   c1_n7->SetTicky(1);
   c1_n7->SetLeftMargin(0.16);
   c1_n7->SetRightMargin(0.05);
   c1_n7->SetTopMargin(0.05);
   c1_n7->SetBottomMargin(0.16);
   c1_n7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__48 = new TPad("dw", "dw",0,0,1,0.5);
   dw__48->Draw();
   dw__48->cd();
   dw__48->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__48->SetFillColor(0);
   dw__48->SetFillStyle(4000);
   dw__48->SetBorderMode(0);
   dw__48->SetBorderSize(0);
   dw__48->SetLogx();
   dw__48->SetTickx(1);
   dw__48->SetTicky(1);
   dw__48->SetLeftMargin(0.120603);
   dw__48->SetRightMargin(0.08040201);
   dw__48->SetTopMargin(0);
   dw__48->SetBottomMargin(0.2072539);
   dw__48->SetFrameBorderMode(0);
   dw__48->SetFrameBorderMode(0);
   Double_t xAxis301[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__301 = new TH1D("chist_dw__301","",11, xAxis301);
   chist_dw__301->SetMinimum(0.2);
   chist_dw__301->SetMaximum(3.2);
   chist_dw__301->SetDirectory(nullptr);
   chist_dw__301->SetStats(0);
   chist_dw__301->SetLineColor(0);
   chist_dw__301->SetLineWidth(0);
   chist_dw__301->SetMarkerColor(0);
   chist_dw__301->SetMarkerStyle(20);
   chist_dw__301->SetMarkerSize(0);
   chist_dw__301->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__301->GetXaxis()->SetRange(1,8);
   chist_dw__301->GetXaxis()->SetMoreLogLabels();
   chist_dw__301->GetXaxis()->SetLabelFont(42);
   chist_dw__301->GetXaxis()->SetLabelSize(0.08);
   chist_dw__301->GetXaxis()->SetTitleSize(0.08);
   chist_dw__301->GetXaxis()->SetTickLength(0.04);
   chist_dw__301->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__301->GetXaxis()->SetTitleFont(42);
   chist_dw__301->GetYaxis()->SetTitle("Stretch");
   chist_dw__301->GetYaxis()->CenterTitle(true);
   chist_dw__301->GetYaxis()->SetNdivisions(405);
   chist_dw__301->GetYaxis()->SetLabelFont(42);
   chist_dw__301->GetYaxis()->SetLabelSize(0.08);
   chist_dw__301->GetYaxis()->SetTitleSize(0.08);
   chist_dw__301->GetYaxis()->SetTickLength(0.04);
   chist_dw__301->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__301->GetYaxis()->SetTitleFont(42);
   chist_dw__301->GetZaxis()->SetLabelFont(42);
   chist_dw__301->GetZaxis()->SetLabelSize(0.05);
   chist_dw__301->GetZaxis()->SetTitleSize(0.05);
   chist_dw__301->GetZaxis()->SetTitleOffset(1);
   chist_dw__301->GetZaxis()->SetTitleFont(42);
   chist_dw__301->Draw("");
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
   Double_t xAxis302[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_8__302 = new TH1D("RZ_stretch_tot_8__302","",11, xAxis302);
   RZ_stretch_tot_8__302->SetBinContent(1,0.9251732);
   RZ_stretch_tot_8__302->SetBinContent(2,0.968042);
   RZ_stretch_tot_8__302->SetBinContent(3,1.020698);
   RZ_stretch_tot_8__302->SetBinContent(4,1.027812);
   RZ_stretch_tot_8__302->SetBinError(1,0.01952855);
   RZ_stretch_tot_8__302->SetBinError(2,0.02215755);
   RZ_stretch_tot_8__302->SetBinError(3,0.04019531);
   RZ_stretch_tot_8__302->SetBinError(4,0.06405036);
   RZ_stretch_tot_8__302->SetEntries(2357.538);
   RZ_stretch_tot_8__302->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_8__302->SetFillColor(ci);
   RZ_stretch_tot_8__302->SetLineWidth(2);
   RZ_stretch_tot_8__302->SetMarkerStyle(20);
   RZ_stretch_tot_8__302->SetMarkerSize(0.8);
   RZ_stretch_tot_8__302->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_8__302->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__302->GetXaxis()->SetTitleOffset(1);
   RZ_stretch_tot_8__302->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__302->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__302->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__302->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__302->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__302->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__302->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__302->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__302->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__302->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_8__302->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__302->Draw("SAME E2");
   Double_t xAxis303[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_8__303 = new TH1D("RZ_stretch_stat_8__303","",11, xAxis303);
   RZ_stretch_stat_8__303->SetBinContent(1,0.9251732);
   RZ_stretch_stat_8__303->SetBinContent(2,0.968042);
   RZ_stretch_stat_8__303->SetBinContent(3,1.020698);
   RZ_stretch_stat_8__303->SetBinContent(4,1.027812);
   RZ_stretch_stat_8__303->SetBinError(1,0.009828549);
   RZ_stretch_stat_8__303->SetBinError(2,0.0169872);
   RZ_stretch_stat_8__303->SetBinError(3,0.01790055);
   RZ_stretch_stat_8__303->SetBinError(4,0.02979769);
   RZ_stretch_stat_8__303->SetEntries(9750.374);
   RZ_stretch_stat_8__303->SetStats(0);
   RZ_stretch_stat_8__303->SetLineWidth(2);
   RZ_stretch_stat_8__303->SetMarkerStyle(20);
   RZ_stretch_stat_8__303->SetMarkerSize(0.8);
   RZ_stretch_stat_8__303->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_8__303->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__303->GetXaxis()->SetTitleOffset(1);
   RZ_stretch_stat_8__303->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__303->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__303->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__303->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__303->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__303->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__303->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__303->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__303->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__303->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_8__303->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__303->Draw("SAME PZ");
   Double_t xAxis304[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_8__304 = new TH1D("SP_stretch_tot_8__304","",11, xAxis304);
   SP_stretch_tot_8__304->SetBinContent(5,1.110055);
   SP_stretch_tot_8__304->SetBinContent(6,1.127804);
   SP_stretch_tot_8__304->SetBinContent(7,1.15545);
   SP_stretch_tot_8__304->SetBinContent(8,1.172015);
   SP_stretch_tot_8__304->SetBinContent(9,1.225011);
   SP_stretch_tot_8__304->SetBinContent(10,1.261037);
   SP_stretch_tot_8__304->SetBinContent(11,1.101644);
   SP_stretch_tot_8__304->SetBinError(5,0.001539573);
   SP_stretch_tot_8__304->SetBinError(6,0.005188183);
   SP_stretch_tot_8__304->SetBinError(7,0.007412552);
   SP_stretch_tot_8__304->SetBinError(8,0.009974525);
   SP_stretch_tot_8__304->SetBinError(9,0.02115186);
   SP_stretch_tot_8__304->SetBinError(10,0.02429643);
   SP_stretch_tot_8__304->SetBinError(11,0.09097372);
   SP_stretch_tot_8__304->SetEntries(6998.741);
   SP_stretch_tot_8__304->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_8__304->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__304->SetLineColor(ci);
   SP_stretch_tot_8__304->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__304->SetMarkerColor(ci);
   SP_stretch_tot_8__304->SetMarkerStyle(20);
   SP_stretch_tot_8__304->SetMarkerSize(0.8);
   SP_stretch_tot_8__304->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_8__304->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_8__304->GetXaxis()->SetTitleOffset(1);
   SP_stretch_tot_8__304->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_8__304->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_8__304->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__304->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__304->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__304->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_8__304->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_8__304->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__304->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__304->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_8__304->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_8__304->Draw("SAME E2");
   Double_t xAxis305[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_8__305 = new TH1D("SP_stretch_stat_8__305","",11, xAxis305);
   SP_stretch_stat_8__305->SetBinContent(5,1.110055);
   SP_stretch_stat_8__305->SetBinContent(6,1.127804);
   SP_stretch_stat_8__305->SetBinContent(7,1.15545);
   SP_stretch_stat_8__305->SetBinContent(8,1.172015);
   SP_stretch_stat_8__305->SetBinContent(9,1.225011);
   SP_stretch_stat_8__305->SetBinContent(10,1.261037);
   SP_stretch_stat_8__305->SetBinContent(11,1.101644);
   SP_stretch_stat_8__305->SetBinError(5,0.0002456585);
   SP_stretch_stat_8__305->SetBinError(6,0.0002918431);
   SP_stretch_stat_8__305->SetBinError(7,0.0005378887);
   SP_stretch_stat_8__305->SetBinError(8,0.0006841655);
   SP_stretch_stat_8__305->SetBinError(9,0.001353523);
   SP_stretch_stat_8__305->SetBinError(10,0.008820841);
   SP_stretch_stat_8__305->SetBinError(11,0.08327232);
   SP_stretch_stat_8__305->SetEntries(9475.888);
   SP_stretch_stat_8__305->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__305->SetLineColor(ci);
   SP_stretch_stat_8__305->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__305->SetMarkerColor(ci);
   SP_stretch_stat_8__305->SetMarkerStyle(20);
   SP_stretch_stat_8__305->SetMarkerSize(0.8);
   SP_stretch_stat_8__305->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_8__305->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_8__305->GetXaxis()->SetTitleOffset(1);
   SP_stretch_stat_8__305->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_8__305->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_8__305->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__305->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__305->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__305->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_8__305->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_8__305->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__305->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__305->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_8__305->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_8__305->Draw("SAME PZ");
   dw__48->Modified();
   c1_n7->cd();
  
// ------------>Primitives in pad: up
   TPad *up__49 = new TPad("up", "up",0,0.5,1,1);
   up__49->Draw();
   up__49->cd();
   up__49->Range(0.4143249,-1.646424,3.986152,2.08687);
   up__49->SetFillColor(0);
   up__49->SetFillStyle(4000);
   up__49->SetBorderMode(0);
   up__49->SetBorderSize(0);
   up__49->SetLogx();
   up__49->SetTickx(1);
   up__49->SetTicky(1);
   up__49->SetLeftMargin(0.120603);
   up__49->SetRightMargin(0.08040201);
   up__49->SetBottomMargin(0.01243523);
   up__49->SetFrameBorderMode(0);
   up__49->SetFrameBorderMode(0);
   Double_t xAxis306[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__306 = new TH1D("chist__306","",11, xAxis306);
   chist__306->SetMinimum(-1.6);
   chist__306->SetMaximum(1.7);
   chist__306->SetDirectory(nullptr);
   chist__306->SetStats(0);
   chist__306->SetLineColor(0);
   chist__306->SetLineWidth(0);
   chist__306->SetMarkerColor(0);
   chist__306->SetMarkerStyle(20);
   chist__306->SetMarkerSize(0);
   chist__306->GetXaxis()->SetRange(1,8);
   chist__306->GetXaxis()->SetNdivisions(4000510);
   chist__306->GetXaxis()->SetLabelFont(42);
   chist__306->GetXaxis()->SetLabelSize(0);
   chist__306->GetXaxis()->SetTitleSize(0.08);
   chist__306->GetXaxis()->SetTickLength(0.04);
   chist__306->GetXaxis()->SetTitleOffset(2.020933);
   chist__306->GetXaxis()->SetTitleFont(42);
   chist__306->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__306->GetYaxis()->SetNdivisions(3000510);
   chist__306->GetYaxis()->SetLabelFont(42);
   chist__306->GetYaxis()->SetLabelSize(0.08);
   chist__306->GetYaxis()->SetTitleSize(0.08);
   chist__306->GetYaxis()->SetTickLength(0.04);
   chist__306->GetYaxis()->SetTitleOffset(0.727387);
   chist__306->GetYaxis()->SetTitleFont(42);
   chist__306->GetZaxis()->SetLabelFont(42);
   chist__306->GetZaxis()->SetLabelSize(0.05);
   chist__306->GetZaxis()->SetTitleSize(0.05);
   chist__306->GetZaxis()->SetTitleOffset(1);
   chist__306->GetZaxis()->SetTitleFont(42);
   chist__306->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_8","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_8","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_8","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_8","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.5098,"2.01 #leq |#eta^{#gamma}| < 2.37");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis307[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_8__307 = new TH1D("RZ_shift_tot_8__307","",11, xAxis307);
   RZ_shift_tot_8__307->SetBinContent(1,-0.2841527);
   RZ_shift_tot_8__307->SetBinContent(2,-0.3476894);
   RZ_shift_tot_8__307->SetBinContent(3,-0.4352317);
   RZ_shift_tot_8__307->SetBinContent(4,-0.5307003);
   RZ_shift_tot_8__307->SetBinError(1,0.0252587);
   RZ_shift_tot_8__307->SetBinError(2,0.02687044);
   RZ_shift_tot_8__307->SetBinError(3,0.02001088);
   RZ_shift_tot_8__307->SetBinError(4,0.03730492);
   RZ_shift_tot_8__307->SetEntries(809.895);
   RZ_shift_tot_8__307->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_8__307->SetFillColor(ci);
   RZ_shift_tot_8__307->SetMarkerStyle(20);
   RZ_shift_tot_8__307->SetMarkerSize(0.8);
   RZ_shift_tot_8__307->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_8__307->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_8__307->GetXaxis()->SetTitleOffset(1);
   RZ_shift_tot_8__307->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_8__307->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_8__307->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__307->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__307->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__307->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_8__307->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_8__307->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__307->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__307->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_8__307->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_8__307->Draw("SAME E2");
   Double_t xAxis308[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_8__308 = new TH1D("RZ_shift_stat_8__308","",11, xAxis308);
   RZ_shift_stat_8__308->SetBinContent(1,-0.2841527);
   RZ_shift_stat_8__308->SetBinContent(2,-0.3476894);
   RZ_shift_stat_8__308->SetBinContent(3,-0.4352317);
   RZ_shift_stat_8__308->SetBinContent(4,-0.5307003);
   RZ_shift_stat_8__308->SetBinError(1,0.009112327);
   RZ_shift_stat_8__308->SetBinError(2,0.01564279);
   RZ_shift_stat_8__308->SetBinError(3,0.0171484);
   RZ_shift_stat_8__308->SetBinError(4,0.03189263);
   RZ_shift_stat_8__308->SetEntries(1557.643);
   RZ_shift_stat_8__308->SetStats(0);
   RZ_shift_stat_8__308->SetMarkerStyle(20);
   RZ_shift_stat_8__308->SetMarkerSize(0.8);
   RZ_shift_stat_8__308->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_8__308->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_8__308->GetXaxis()->SetTitleOffset(1);
   RZ_shift_stat_8__308->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_8__308->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_8__308->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__308->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__308->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__308->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_8__308->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_8__308->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__308->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__308->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_8__308->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_8__308->Draw("SAME PZ");
   Double_t xAxis309[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_8__309 = new TH1D("SP_shift_tot_8__309","",11, xAxis309);
   SP_shift_tot_8__309->SetBinContent(5,-0.6628771);
   SP_shift_tot_8__309->SetBinContent(6,-0.7025494);
   SP_shift_tot_8__309->SetBinContent(7,-0.7431657);
   SP_shift_tot_8__309->SetBinContent(8,-0.703265);
   SP_shift_tot_8__309->SetBinContent(9,-0.7270696);
   SP_shift_tot_8__309->SetBinContent(10,-0.6171898);
   SP_shift_tot_8__309->SetBinContent(11,-0.6972152);
   SP_shift_tot_8__309->SetBinError(5,0.007875951);
   SP_shift_tot_8__309->SetBinError(6,0.01496894);
   SP_shift_tot_8__309->SetBinError(7,0.01715617);
   SP_shift_tot_8__309->SetBinError(8,0.01472763);
   SP_shift_tot_8__309->SetBinError(9,0.01961903);
   SP_shift_tot_8__309->SetBinError(10,0.01656678);
   SP_shift_tot_8__309->SetBinError(11,0.07038098);
   SP_shift_tot_8__309->SetEntries(3674.595);
   SP_shift_tot_8__309->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_8__309->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__309->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__309->SetMarkerColor(ci);
   SP_shift_tot_8__309->SetMarkerStyle(20);
   SP_shift_tot_8__309->SetMarkerSize(0.8);
   SP_shift_tot_8__309->GetXaxis()->SetRange(1,8);
   SP_shift_tot_8__309->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_8__309->GetXaxis()->SetTitleOffset(1);
   SP_shift_tot_8__309->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_8__309->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_8__309->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__309->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__309->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__309->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_8__309->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_8__309->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__309->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__309->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_8__309->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_8__309->Draw("SAME E2");
   Double_t xAxis310[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_8__310 = new TH1D("SP_shift_stat_8__310","",11, xAxis310);
   SP_shift_stat_8__310->SetBinContent(5,-0.6628771);
   SP_shift_stat_8__310->SetBinContent(6,-0.7025494);
   SP_shift_stat_8__310->SetBinContent(7,-0.7431657);
   SP_shift_stat_8__310->SetBinContent(8,-0.703265);
   SP_shift_stat_8__310->SetBinContent(9,-0.7270696);
   SP_shift_stat_8__310->SetBinContent(10,-0.6171898);
   SP_shift_stat_8__310->SetBinContent(11,-0.6972152);
   SP_shift_stat_8__310->SetBinError(5,0.0002528748);
   SP_shift_stat_8__310->SetBinError(6,0.0002365194);
   SP_shift_stat_8__310->SetBinError(7,0.0004901553);
   SP_shift_stat_8__310->SetBinError(8,0.0006663894);
   SP_shift_stat_8__310->SetBinError(9,0.001249628);
   SP_shift_stat_8__310->SetBinError(10,0.005887355);
   SP_shift_stat_8__310->SetBinError(11,0.06838682);
   SP_shift_stat_8__310->SetEntries(4997.011);
   SP_shift_stat_8__310->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__310->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__310->SetMarkerColor(ci);
   SP_shift_stat_8__310->SetMarkerStyle(20);
   SP_shift_stat_8__310->SetMarkerSize(0.8);
   SP_shift_stat_8__310->GetXaxis()->SetRange(1,8);
   SP_shift_stat_8__310->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_8__310->GetXaxis()->SetTitleOffset(1);
   SP_shift_stat_8__310->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_8__310->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_8__310->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__310->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__310->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__310->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_8__310->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_8__310->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__310->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__310->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_8__310->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_8__310->Draw("SAME PZ");
   Double_t xAxis311[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__311 = new TH1D("chist_copy__311","",11, xAxis311);
   chist_copy__311->SetMinimum(-1.6);
   chist_copy__311->SetMaximum(1.7);
   chist_copy__311->SetDirectory(nullptr);
   chist_copy__311->SetStats(0);
   chist_copy__311->SetLineColor(0);
   chist_copy__311->SetLineWidth(0);
   chist_copy__311->SetMarkerColor(0);
   chist_copy__311->SetMarkerStyle(20);
   chist_copy__311->SetMarkerSize(0);
   chist_copy__311->GetXaxis()->SetRange(1,8);
   chist_copy__311->GetXaxis()->SetNdivisions(4000510);
   chist_copy__311->GetXaxis()->SetLabelFont(42);
   chist_copy__311->GetXaxis()->SetLabelSize(0);
   chist_copy__311->GetXaxis()->SetTitleSize(0.08);
   chist_copy__311->GetXaxis()->SetTickLength(0.04);
   chist_copy__311->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__311->GetXaxis()->SetTitleFont(42);
   chist_copy__311->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__311->GetYaxis()->SetNdivisions(3000510);
   chist_copy__311->GetYaxis()->SetLabelFont(42);
   chist_copy__311->GetYaxis()->SetLabelSize(0.08);
   chist_copy__311->GetYaxis()->SetTitleSize(0.08);
   chist_copy__311->GetYaxis()->SetTickLength(0.04);
   chist_copy__311->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__311->GetYaxis()->SetTitleFont(42);
   chist_copy__311->GetZaxis()->SetLabelFont(42);
   chist_copy__311->GetZaxis()->SetLabelSize(0.05);
   chist_copy__311->GetZaxis()->SetTitleSize(0.05);
   chist_copy__311->GetZaxis()->SetTitleOffset(1);
   chist_copy__311->GetZaxis()->SetTitleFont(42);
   chist_copy__311->Draw("sameaxis");
   up__49->Modified();
   c1_n7->cd();
   c1_n7->Modified();
   c1_n7->SetSelected(c1_n7);
}
