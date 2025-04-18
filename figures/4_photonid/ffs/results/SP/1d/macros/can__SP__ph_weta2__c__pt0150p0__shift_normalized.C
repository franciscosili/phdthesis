#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_weta2__c__pt0150p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n46/
//=========  (Thu Apr  4 17:59:30 2024) by ROOT version 6.30/02
   TCanvas *c1_n46 = new TCanvas("c1_n46", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n46->SetHighLightColor(2);
   c1_n46->Range(0,0,1,1);
   c1_n46->SetFillColor(0);
   c1_n46->SetBorderMode(0);
   c1_n46->SetBorderSize(2);
   c1_n46->SetTickx(1);
   c1_n46->SetTicky(1);
   c1_n46->SetLeftMargin(0.16);
   c1_n46->SetRightMargin(0.05);
   c1_n46->SetTopMargin(0.05);
   c1_n46->SetBottomMargin(0.16);
   c1_n46->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__2402 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2402->Draw();
   dw__2402->cd();
   dw__2402->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2402->SetFillColor(0);
   dw__2402->SetFillStyle(4000);
   dw__2402->SetBorderMode(0);
   dw__2402->SetBorderSize(0);
   dw__2402->SetTickx(1);
   dw__2402->SetTicky(1);
   dw__2402->SetLeftMargin(0.120603);
   dw__2402->SetRightMargin(0.08040201);
   dw__2402->SetTopMargin(0);
   dw__2402->SetBottomMargin(0.2072539);
   dw__2402->SetFrameBorderMode(0);
   dw__2402->SetFrameBorderMode(0);
   Double_t xAxis3340[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__11180 = new TH1D("chist_dw__11180","",8, xAxis3340);
   chist_dw__11180->SetMinimum(0.2);
   chist_dw__11180->SetMaximum(3.2);
   chist_dw__11180->SetDirectory(nullptr);
   chist_dw__11180->SetStats(0);
   chist_dw__11180->SetLineColor(0);
   chist_dw__11180->SetLineWidth(0);
   chist_dw__11180->SetMarkerColor(0);
   chist_dw__11180->SetMarkerStyle(20);
   chist_dw__11180->SetMarkerSize(0);
   chist_dw__11180->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__11180->GetXaxis()->SetRange(1,8);
   chist_dw__11180->GetXaxis()->SetLabelFont(42);
   chist_dw__11180->GetXaxis()->SetLabelSize(0.08);
   chist_dw__11180->GetXaxis()->SetTitleSize(0.08);
   chist_dw__11180->GetXaxis()->SetTickLength(0.04);
   chist_dw__11180->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__11180->GetXaxis()->SetTitleFont(42);
   chist_dw__11180->GetYaxis()->SetTitle("Stretch");
   chist_dw__11180->GetYaxis()->CenterTitle(true);
   chist_dw__11180->GetYaxis()->SetNdivisions(405);
   chist_dw__11180->GetYaxis()->SetLabelFont(42);
   chist_dw__11180->GetYaxis()->SetLabelSize(0.08);
   chist_dw__11180->GetYaxis()->SetTitleSize(0.08);
   chist_dw__11180->GetYaxis()->SetTickLength(0.04);
   chist_dw__11180->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__11180->GetYaxis()->SetTitleFont(42);
   chist_dw__11180->GetZaxis()->SetLabelFont(42);
   chist_dw__11180->GetZaxis()->SetLabelSize(0.05);
   chist_dw__11180->GetZaxis()->SetTitleSize(0.05);
   chist_dw__11180->GetZaxis()->SetTitleOffset(1);
   chist_dw__11180->GetZaxis()->SetTitleFont(42);
   chist_dw__11180->Draw("");
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
   Double_t xAxis3341[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_5__11181 = new TH1D("stretch_tot_5__11181","",8, xAxis3341);
   stretch_tot_5__11181->SetBinContent(1,1.111773);
   stretch_tot_5__11181->SetBinContent(2,1.138172);
   stretch_tot_5__11181->SetBinContent(3,1.121958);
   stretch_tot_5__11181->SetBinContent(4,1.201338);
   stretch_tot_5__11181->SetBinContent(6,1.142749);
   stretch_tot_5__11181->SetBinContent(7,1.229652);
   stretch_tot_5__11181->SetBinContent(8,1.262247);
   stretch_tot_5__11181->SetBinError(1,0.03557174);
   stretch_tot_5__11181->SetBinError(2,0.05652834);
   stretch_tot_5__11181->SetBinError(3,0.08299869);
   stretch_tot_5__11181->SetBinError(4,0.09810189);
   stretch_tot_5__11181->SetBinError(6,0.03974707);
   stretch_tot_5__11181->SetBinError(7,0.03249523);
   stretch_tot_5__11181->SetBinError(8,0.0544565);
   stretch_tot_5__11181->SetEntries(2535.082);
   stretch_tot_5__11181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_5__11181->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_5__11181->SetLineColor(ci);
   stretch_tot_5__11181->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_5__11181->SetMarkerColor(ci);
   stretch_tot_5__11181->SetMarkerStyle(20);
   stretch_tot_5__11181->SetMarkerSize(0.8);
   stretch_tot_5__11181->GetXaxis()->SetRange(1,8);
   stretch_tot_5__11181->GetXaxis()->SetLabelFont(42);
   stretch_tot_5__11181->GetXaxis()->SetTitleFont(42);
   stretch_tot_5__11181->GetYaxis()->SetLabelFont(42);
   stretch_tot_5__11181->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_5__11181->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_5__11181->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_5__11181->GetYaxis()->SetTitleFont(42);
   stretch_tot_5__11181->GetZaxis()->SetLabelFont(42);
   stretch_tot_5__11181->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_5__11181->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_5__11181->GetZaxis()->SetTitleOffset(1);
   stretch_tot_5__11181->GetZaxis()->SetTitleFont(42);
   stretch_tot_5__11181->Draw("SAME E2");
   Double_t xAxis3342[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_5__11182 = new TH1D("stretch_stat_5__11182","",8, xAxis3342);
   stretch_stat_5__11182->SetBinContent(1,1.111773);
   stretch_stat_5__11182->SetBinContent(2,1.138172);
   stretch_stat_5__11182->SetBinContent(3,1.121958);
   stretch_stat_5__11182->SetBinContent(4,1.201338);
   stretch_stat_5__11182->SetBinContent(6,1.142749);
   stretch_stat_5__11182->SetBinContent(7,1.229652);
   stretch_stat_5__11182->SetBinContent(8,1.262247);
   stretch_stat_5__11182->SetBinError(1,0.001425314);
   stretch_stat_5__11182->SetBinError(2,0.002666759);
   stretch_stat_5__11182->SetBinError(3,0.0013844);
   stretch_stat_5__11182->SetBinError(4,0.001622972);
   stretch_stat_5__11182->SetBinError(6,0.001468851);
   stretch_stat_5__11182->SetBinError(7,0.001736853);
   stretch_stat_5__11182->SetBinError(8,0.001424857);
   stretch_stat_5__11182->SetEntries(3223707);
   stretch_stat_5__11182->SetStats(0);
   stretch_stat_5__11182->SetLineWidth(2);
   stretch_stat_5__11182->SetMarkerStyle(20);
   stretch_stat_5__11182->SetMarkerSize(0.8);
   stretch_stat_5__11182->GetXaxis()->SetRange(1,8);
   stretch_stat_5__11182->GetXaxis()->SetLabelFont(42);
   stretch_stat_5__11182->GetXaxis()->SetTitleFont(42);
   stretch_stat_5__11182->GetYaxis()->SetLabelFont(42);
   stretch_stat_5__11182->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_5__11182->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_5__11182->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_5__11182->GetYaxis()->SetTitleFont(42);
   stretch_stat_5__11182->GetZaxis()->SetLabelFont(42);
   stretch_stat_5__11182->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_5__11182->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_5__11182->GetZaxis()->SetTitleOffset(1);
   stretch_stat_5__11182->GetZaxis()->SetTitleFont(42);
   stretch_stat_5__11182->Draw("SAME PZ");
   dw__2402->Modified();
   c1_n46->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2403 = new TPad("up", "up",0,0.5,1,1);
   up__2403->Draw();
   up__2403->cd();
   up__2403->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__2403->SetFillColor(0);
   up__2403->SetFillStyle(4000);
   up__2403->SetBorderMode(0);
   up__2403->SetBorderSize(0);
   up__2403->SetTickx(1);
   up__2403->SetTicky(1);
   up__2403->SetLeftMargin(0.120603);
   up__2403->SetRightMargin(0.08040201);
   up__2403->SetBottomMargin(0.01243523);
   up__2403->SetFrameBorderMode(0);
   up__2403->SetFrameBorderMode(0);
   Double_t xAxis3343[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__11183 = new TH1D("chist__11183","",8, xAxis3343);
   chist__11183->SetMinimum(-0.9);
   chist__11183->SetMaximum(2);
   chist__11183->SetDirectory(nullptr);
   chist__11183->SetStats(0);
   chist__11183->SetLineColor(0);
   chist__11183->SetLineWidth(0);
   chist__11183->SetMarkerColor(0);
   chist__11183->SetMarkerStyle(20);
   chist__11183->SetMarkerSize(0);
   chist__11183->GetXaxis()->SetRange(1,8);
   chist__11183->GetXaxis()->SetNdivisions(4000510);
   chist__11183->GetXaxis()->SetLabelFont(42);
   chist__11183->GetXaxis()->SetLabelSize(0);
   chist__11183->GetXaxis()->SetTitleSize(0.08);
   chist__11183->GetXaxis()->SetTickLength(0.04);
   chist__11183->GetXaxis()->SetTitleOffset(2.020933);
   chist__11183->GetXaxis()->SetTitleFont(42);
   chist__11183->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__11183->GetYaxis()->SetNdivisions(3000510);
   chist__11183->GetYaxis()->SetLabelFont(42);
   chist__11183->GetYaxis()->SetLabelSize(0.08);
   chist__11183->GetYaxis()->SetTitleSize(0.08);
   chist__11183->GetYaxis()->SetTickLength(0.04);
   chist__11183->GetYaxis()->SetTitleOffset(0.727387);
   chist__11183->GetYaxis()->SetTitleFont(42);
   chist__11183->GetZaxis()->SetLabelFont(42);
   chist__11183->GetZaxis()->SetLabelSize(0.05);
   chist__11183->GetZaxis()->SetTitleSize(0.05);
   chist__11183->GetZaxis()->SetTitleOffset(1);
   chist__11183->GetZaxis()->SetTitleFont(42);
   chist__11183->Draw("pe");
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
   
   TLegend *leg = new TLegend(0.4861809,0.699,0.879397,0.875,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03000911);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("shift_tot_5","SP, Total unc., TUNE26","F");

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("shift_stat_5","SP, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.633,"w_{#eta 2}");
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
      tex = new TLatex(0.160804,0.5098,"150.0 #leq p_{T}^{#gamma} [GeV] < 300.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis3344[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_5__11184 = new TH1D("shift_tot_5__11184","",8, xAxis3344);
   shift_tot_5__11184->SetBinContent(1,0.2744139);
   shift_tot_5__11184->SetBinContent(2,0.3322501);
   shift_tot_5__11184->SetBinContent(3,0.1213848);
   shift_tot_5__11184->SetBinContent(4,0.2816941);
   shift_tot_5__11184->SetBinContent(6,0.6209961);
   shift_tot_5__11184->SetBinContent(7,0.9146276);
   shift_tot_5__11184->SetBinContent(8,1.103396);
   shift_tot_5__11184->SetBinError(1,0.03503437);
   shift_tot_5__11184->SetBinError(2,0.05684706);
   shift_tot_5__11184->SetBinError(3,0.07267287);
   shift_tot_5__11184->SetBinError(4,0.0926395);
   shift_tot_5__11184->SetBinError(6,0.05615696);
   shift_tot_5__11184->SetBinError(7,0.04770672);
   shift_tot_5__11184->SetBinError(8,0.0840398);
   shift_tot_5__11184->SetEntries(432.0501);
   shift_tot_5__11184->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_5__11184->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_5__11184->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_5__11184->SetMarkerColor(ci);
   shift_tot_5__11184->SetMarkerStyle(20);
   shift_tot_5__11184->SetMarkerSize(0.8);
   shift_tot_5__11184->GetXaxis()->SetRange(1,8);
   shift_tot_5__11184->GetXaxis()->SetLabelFont(42);
   shift_tot_5__11184->GetXaxis()->SetTitleFont(42);
   shift_tot_5__11184->GetYaxis()->SetLabelFont(42);
   shift_tot_5__11184->GetYaxis()->SetLabelSize(0.05);
   shift_tot_5__11184->GetYaxis()->SetTitleSize(0.05);
   shift_tot_5__11184->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_5__11184->GetYaxis()->SetTitleFont(42);
   shift_tot_5__11184->GetZaxis()->SetLabelFont(42);
   shift_tot_5__11184->GetZaxis()->SetLabelSize(0.05);
   shift_tot_5__11184->GetZaxis()->SetTitleSize(0.05);
   shift_tot_5__11184->GetZaxis()->SetTitleOffset(1);
   shift_tot_5__11184->GetZaxis()->SetTitleFont(42);
   shift_tot_5__11184->Draw("SAME E2");
   Double_t xAxis3345[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_5__11185 = new TH1D("shift_stat_5__11185","",8, xAxis3345);
   shift_stat_5__11185->SetBinContent(1,0.2744139);
   shift_stat_5__11185->SetBinContent(2,0.3322501);
   shift_stat_5__11185->SetBinContent(3,0.1213848);
   shift_stat_5__11185->SetBinContent(4,0.2816941);
   shift_stat_5__11185->SetBinContent(6,0.6209961);
   shift_stat_5__11185->SetBinContent(7,0.9146276);
   shift_stat_5__11185->SetBinContent(8,1.103396);
   shift_stat_5__11185->SetBinError(1,0.001469684);
   shift_stat_5__11185->SetBinError(2,0.002583252);
   shift_stat_5__11185->SetBinError(3,0.001491692);
   shift_stat_5__11185->SetBinError(4,0.001645701);
   shift_stat_5__11185->SetBinError(6,0.001427374);
   shift_stat_5__11185->SetBinError(7,0.002043166);
   shift_stat_5__11185->SetBinError(8,0.001552654);
   shift_stat_5__11185->SetEntries(594635.3);
   shift_stat_5__11185->SetStats(0);
   shift_stat_5__11185->SetMarkerStyle(20);
   shift_stat_5__11185->SetMarkerSize(0.8);
   shift_stat_5__11185->GetXaxis()->SetRange(1,8);
   shift_stat_5__11185->GetXaxis()->SetLabelFont(42);
   shift_stat_5__11185->GetXaxis()->SetTitleFont(42);
   shift_stat_5__11185->GetYaxis()->SetLabelFont(42);
   shift_stat_5__11185->GetYaxis()->SetLabelSize(0.05);
   shift_stat_5__11185->GetYaxis()->SetTitleSize(0.05);
   shift_stat_5__11185->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_5__11185->GetYaxis()->SetTitleFont(42);
   shift_stat_5__11185->GetZaxis()->SetLabelFont(42);
   shift_stat_5__11185->GetZaxis()->SetLabelSize(0.05);
   shift_stat_5__11185->GetZaxis()->SetTitleSize(0.05);
   shift_stat_5__11185->GetZaxis()->SetTitleOffset(1);
   shift_stat_5__11185->GetZaxis()->SetTitleFont(42);
   shift_stat_5__11185->Draw("SAME PZ");
   Double_t xAxis3346[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__11186 = new TH1D("chist_copy__11186","",8, xAxis3346);
   chist_copy__11186->SetMinimum(-0.9);
   chist_copy__11186->SetMaximum(2);
   chist_copy__11186->SetDirectory(nullptr);
   chist_copy__11186->SetStats(0);
   chist_copy__11186->SetLineColor(0);
   chist_copy__11186->SetLineWidth(0);
   chist_copy__11186->SetMarkerColor(0);
   chist_copy__11186->SetMarkerStyle(20);
   chist_copy__11186->SetMarkerSize(0);
   chist_copy__11186->GetXaxis()->SetRange(1,8);
   chist_copy__11186->GetXaxis()->SetNdivisions(4000510);
   chist_copy__11186->GetXaxis()->SetLabelFont(42);
   chist_copy__11186->GetXaxis()->SetLabelSize(0);
   chist_copy__11186->GetXaxis()->SetTitleSize(0.08);
   chist_copy__11186->GetXaxis()->SetTickLength(0.04);
   chist_copy__11186->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__11186->GetXaxis()->SetTitleFont(42);
   chist_copy__11186->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__11186->GetYaxis()->SetNdivisions(3000510);
   chist_copy__11186->GetYaxis()->SetLabelFont(42);
   chist_copy__11186->GetYaxis()->SetLabelSize(0.08);
   chist_copy__11186->GetYaxis()->SetTitleSize(0.08);
   chist_copy__11186->GetYaxis()->SetTickLength(0.04);
   chist_copy__11186->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__11186->GetYaxis()->SetTitleFont(42);
   chist_copy__11186->GetZaxis()->SetLabelFont(42);
   chist_copy__11186->GetZaxis()->SetLabelSize(0.05);
   chist_copy__11186->GetZaxis()->SetTitleSize(0.05);
   chist_copy__11186->GetZaxis()->SetTitleOffset(1);
   chist_copy__11186->GetZaxis()->SetTitleFont(42);
   chist_copy__11186->Draw("sameaxis");
   up__2403->Modified();
   c1_n46->cd();
   c1_n46->Modified();
   c1_n46->SetSelected(c1_n46);
}
