#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_fside__u__pt0050p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n75/
//=========  (Thu Apr  4 17:59:20 2024) by ROOT version 6.30/02
   TCanvas *c1_n75 = new TCanvas("c1_n75", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n75->SetHighLightColor(2);
   c1_n75->Range(0,0,1,1);
   c1_n75->SetFillColor(0);
   c1_n75->SetBorderMode(0);
   c1_n75->SetBorderSize(2);
   c1_n75->SetTickx(1);
   c1_n75->SetTicky(1);
   c1_n75->SetLeftMargin(0.16);
   c1_n75->SetRightMargin(0.05);
   c1_n75->SetTopMargin(0.05);
   c1_n75->SetBottomMargin(0.16);
   c1_n75->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1806 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1806->Draw();
   dw__1806->cd();
   dw__1806->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1806->SetFillColor(0);
   dw__1806->SetFillStyle(4000);
   dw__1806->SetBorderMode(0);
   dw__1806->SetBorderSize(0);
   dw__1806->SetTickx(1);
   dw__1806->SetTicky(1);
   dw__1806->SetLeftMargin(0.120603);
   dw__1806->SetRightMargin(0.08040201);
   dw__1806->SetTopMargin(0);
   dw__1806->SetBottomMargin(0.2072539);
   dw__1806->SetFrameBorderMode(0);
   dw__1806->SetFrameBorderMode(0);
   Double_t xAxis960[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__8800 = new TH1D("chist_dw__8800","",8, xAxis960);
   chist_dw__8800->SetMinimum(0.2);
   chist_dw__8800->SetMaximum(3.2);
   chist_dw__8800->SetDirectory(nullptr);
   chist_dw__8800->SetStats(0);
   chist_dw__8800->SetLineColor(0);
   chist_dw__8800->SetLineWidth(0);
   chist_dw__8800->SetMarkerColor(0);
   chist_dw__8800->SetMarkerStyle(20);
   chist_dw__8800->SetMarkerSize(0);
   chist_dw__8800->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__8800->GetXaxis()->SetRange(1,7);
   chist_dw__8800->GetXaxis()->SetLabelFont(42);
   chist_dw__8800->GetXaxis()->SetLabelSize(0.08);
   chist_dw__8800->GetXaxis()->SetTitleSize(0.08);
   chist_dw__8800->GetXaxis()->SetTickLength(0.04);
   chist_dw__8800->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__8800->GetXaxis()->SetTitleFont(42);
   chist_dw__8800->GetYaxis()->SetTitle("Stretch");
   chist_dw__8800->GetYaxis()->CenterTitle(true);
   chist_dw__8800->GetYaxis()->SetNdivisions(405);
   chist_dw__8800->GetYaxis()->SetLabelFont(42);
   chist_dw__8800->GetYaxis()->SetLabelSize(0.08);
   chist_dw__8800->GetYaxis()->SetTitleSize(0.08);
   chist_dw__8800->GetYaxis()->SetTickLength(0.04);
   chist_dw__8800->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__8800->GetYaxis()->SetTitleFont(42);
   chist_dw__8800->GetZaxis()->SetLabelFont(42);
   chist_dw__8800->GetZaxis()->SetLabelSize(0.05);
   chist_dw__8800->GetZaxis()->SetTitleSize(0.05);
   chist_dw__8800->GetZaxis()->SetTitleOffset(1);
   chist_dw__8800->GetZaxis()->SetTitleFont(42);
   chist_dw__8800->Draw("");
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
   Double_t xAxis961[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_1__8801 = new TH1D("stretch_tot_1__8801","",8, xAxis961);
   stretch_tot_1__8801->SetBinContent(1,1.088596);
   stretch_tot_1__8801->SetBinContent(2,1.137928);
   stretch_tot_1__8801->SetBinContent(3,1.109118);
   stretch_tot_1__8801->SetBinContent(4,1.188971);
   stretch_tot_1__8801->SetBinContent(6,1.068816);
   stretch_tot_1__8801->SetBinContent(7,1.191839);
   stretch_tot_1__8801->SetBinContent(8,1.143946);
   stretch_tot_1__8801->SetBinError(1,0.00546957);
   stretch_tot_1__8801->SetBinError(2,0.008676606);
   stretch_tot_1__8801->SetBinError(3,0.01145486);
   stretch_tot_1__8801->SetBinError(4,0.01280365);
   stretch_tot_1__8801->SetBinError(6,0.01036355);
   stretch_tot_1__8801->SetBinError(7,0.01236967);
   stretch_tot_1__8801->SetBinError(8,0.0069948);
   stretch_tot_1__8801->SetEntries(88591.91);
   stretch_tot_1__8801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_1__8801->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__8801->SetLineColor(ci);
   stretch_tot_1__8801->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__8801->SetMarkerColor(ci);
   stretch_tot_1__8801->SetMarkerStyle(20);
   stretch_tot_1__8801->SetMarkerSize(0.8);
   stretch_tot_1__8801->GetXaxis()->SetRange(1,7);
   stretch_tot_1__8801->GetXaxis()->SetLabelFont(42);
   stretch_tot_1__8801->GetXaxis()->SetTitleFont(42);
   stretch_tot_1__8801->GetYaxis()->SetLabelFont(42);
   stretch_tot_1__8801->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_1__8801->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_1__8801->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_1__8801->GetYaxis()->SetTitleFont(42);
   stretch_tot_1__8801->GetZaxis()->SetLabelFont(42);
   stretch_tot_1__8801->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_1__8801->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_1__8801->GetZaxis()->SetTitleOffset(1);
   stretch_tot_1__8801->GetZaxis()->SetTitleFont(42);
   stretch_tot_1__8801->Draw("SAME E2");
   Double_t xAxis962[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_1__8802 = new TH1D("stretch_stat_1__8802","",8, xAxis962);
   stretch_stat_1__8802->SetBinContent(1,1.088596);
   stretch_stat_1__8802->SetBinContent(2,1.137928);
   stretch_stat_1__8802->SetBinContent(3,1.109118);
   stretch_stat_1__8802->SetBinContent(4,1.188971);
   stretch_stat_1__8802->SetBinContent(6,1.068816);
   stretch_stat_1__8802->SetBinContent(7,1.191839);
   stretch_stat_1__8802->SetBinContent(8,1.143946);
   stretch_stat_1__8802->SetBinError(1,0.0001496734);
   stretch_stat_1__8802->SetBinError(2,0.0002352616);
   stretch_stat_1__8802->SetBinError(3,0.000189389);
   stretch_stat_1__8802->SetBinError(4,0.0002823851);
   stretch_stat_1__8802->SetBinError(6,0.0002735364);
   stretch_stat_1__8802->SetBinError(7,0.0004708674);
   stretch_stat_1__8802->SetBinError(8,0.0003266403);
   stretch_stat_1__8802->SetEntries(1.05386e+08);
   stretch_stat_1__8802->SetStats(0);
   stretch_stat_1__8802->SetLineWidth(2);
   stretch_stat_1__8802->SetMarkerStyle(20);
   stretch_stat_1__8802->SetMarkerSize(0.8);
   stretch_stat_1__8802->GetXaxis()->SetRange(1,7);
   stretch_stat_1__8802->GetXaxis()->SetLabelFont(42);
   stretch_stat_1__8802->GetXaxis()->SetTitleFont(42);
   stretch_stat_1__8802->GetYaxis()->SetLabelFont(42);
   stretch_stat_1__8802->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_1__8802->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_1__8802->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_1__8802->GetYaxis()->SetTitleFont(42);
   stretch_stat_1__8802->GetZaxis()->SetLabelFont(42);
   stretch_stat_1__8802->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_1__8802->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_1__8802->GetZaxis()->SetTitleOffset(1);
   stretch_stat_1__8802->GetZaxis()->SetTitleFont(42);
   stretch_stat_1__8802->Draw("SAME PZ");
   dw__1806->Modified();
   c1_n75->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1807 = new TPad("up", "up",0,0.5,1,1);
   up__1807->Draw();
   up__1807->cd();
   up__1807->Range(-0.3577359,-0.6365768,2.608491,2.304807);
   up__1807->SetFillColor(0);
   up__1807->SetFillStyle(4000);
   up__1807->SetBorderMode(0);
   up__1807->SetBorderSize(0);
   up__1807->SetTickx(1);
   up__1807->SetTicky(1);
   up__1807->SetLeftMargin(0.120603);
   up__1807->SetRightMargin(0.08040201);
   up__1807->SetBottomMargin(0.01243523);
   up__1807->SetFrameBorderMode(0);
   up__1807->SetFrameBorderMode(0);
   Double_t xAxis963[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__8803 = new TH1D("chist__8803","",8, xAxis963);
   chist__8803->SetMinimum(-0.6);
   chist__8803->SetMaximum(2);
   chist__8803->SetDirectory(nullptr);
   chist__8803->SetStats(0);
   chist__8803->SetLineColor(0);
   chist__8803->SetLineWidth(0);
   chist__8803->SetMarkerColor(0);
   chist__8803->SetMarkerStyle(20);
   chist__8803->SetMarkerSize(0);
   chist__8803->GetXaxis()->SetRange(1,7);
   chist__8803->GetXaxis()->SetNdivisions(4000510);
   chist__8803->GetXaxis()->SetLabelFont(42);
   chist__8803->GetXaxis()->SetLabelSize(0);
   chist__8803->GetXaxis()->SetTitleSize(0.08);
   chist__8803->GetXaxis()->SetTickLength(0.04);
   chist__8803->GetXaxis()->SetTitleOffset(2.020933);
   chist__8803->GetXaxis()->SetTitleFont(42);
   chist__8803->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__8803->GetYaxis()->SetNdivisions(3000510);
   chist__8803->GetYaxis()->SetLabelFont(42);
   chist__8803->GetYaxis()->SetLabelSize(0.08);
   chist__8803->GetYaxis()->SetTitleSize(0.08);
   chist__8803->GetYaxis()->SetTickLength(0.04);
   chist__8803->GetYaxis()->SetTitleOffset(0.727387);
   chist__8803->GetYaxis()->SetTitleFont(42);
   chist__8803->GetZaxis()->SetLabelFont(42);
   chist__8803->GetZaxis()->SetLabelSize(0.05);
   chist__8803->GetZaxis()->SetTitleSize(0.05);
   chist__8803->GetZaxis()->SetTitleOffset(1);
   chist__8803->GetZaxis()->SetTitleFont(42);
   chist__8803->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_1","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_1","SP, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
      tex = new TLatex(0.160804,0.5098,"50.0 #leq p_{T}^{#gamma} [GeV] < 60.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis964[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_1__8804 = new TH1D("shift_tot_1__8804","",8, xAxis964);
   shift_tot_1__8804->SetBinContent(1,0.2842655);
   shift_tot_1__8804->SetBinContent(2,0.3827926);
   shift_tot_1__8804->SetBinContent(3,0.3808002);
   shift_tot_1__8804->SetBinContent(4,0.4432189);
   shift_tot_1__8804->SetBinContent(6,0.4798602);
   shift_tot_1__8804->SetBinContent(7,1.152831);
   shift_tot_1__8804->SetBinContent(8,1.121068);
   shift_tot_1__8804->SetBinError(1,0.02215482);
   shift_tot_1__8804->SetBinError(2,0.02629287);
   shift_tot_1__8804->SetBinError(3,0.02055256);
   shift_tot_1__8804->SetBinError(4,0.02717509);
   shift_tot_1__8804->SetBinError(6,0.02191067);
   shift_tot_1__8804->SetBinError(7,0.02258917);
   shift_tot_1__8804->SetBinError(8,0.02089597);
   shift_tot_1__8804->SetEntries(4779.436);
   shift_tot_1__8804->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_1__8804->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__8804->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__8804->SetMarkerColor(ci);
   shift_tot_1__8804->SetMarkerStyle(20);
   shift_tot_1__8804->SetMarkerSize(0.8);
   shift_tot_1__8804->GetXaxis()->SetRange(1,7);
   shift_tot_1__8804->GetXaxis()->SetLabelFont(42);
   shift_tot_1__8804->GetXaxis()->SetTitleFont(42);
   shift_tot_1__8804->GetYaxis()->SetLabelFont(42);
   shift_tot_1__8804->GetYaxis()->SetLabelSize(0.05);
   shift_tot_1__8804->GetYaxis()->SetTitleSize(0.05);
   shift_tot_1__8804->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_1__8804->GetYaxis()->SetTitleFont(42);
   shift_tot_1__8804->GetZaxis()->SetLabelFont(42);
   shift_tot_1__8804->GetZaxis()->SetLabelSize(0.05);
   shift_tot_1__8804->GetZaxis()->SetTitleSize(0.05);
   shift_tot_1__8804->GetZaxis()->SetTitleOffset(1);
   shift_tot_1__8804->GetZaxis()->SetTitleFont(42);
   shift_tot_1__8804->Draw("SAME E2");
   Double_t xAxis965[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_1__8805 = new TH1D("shift_stat_1__8805","",8, xAxis965);
   shift_stat_1__8805->SetBinContent(1,0.2842655);
   shift_stat_1__8805->SetBinContent(2,0.3827926);
   shift_stat_1__8805->SetBinContent(3,0.3808002);
   shift_stat_1__8805->SetBinContent(4,0.4432189);
   shift_stat_1__8805->SetBinContent(6,0.4798602);
   shift_stat_1__8805->SetBinContent(7,1.152831);
   shift_stat_1__8805->SetBinContent(8,1.121068);
   shift_stat_1__8805->SetBinError(1,0.0001681852);
   shift_stat_1__8805->SetBinError(2,0.0002742561);
   shift_stat_1__8805->SetBinError(3,0.0002468939);
   shift_stat_1__8805->SetBinError(4,0.0003102993);
   shift_stat_1__8805->SetBinError(6,0.000281525);
   shift_stat_1__8805->SetBinError(7,0.0003413677);
   shift_stat_1__8805->SetBinError(8,0.0002134356);
   shift_stat_1__8805->SetEntries(3.588741e+07);
   shift_stat_1__8805->SetStats(0);
   shift_stat_1__8805->SetMarkerStyle(20);
   shift_stat_1__8805->SetMarkerSize(0.8);
   shift_stat_1__8805->GetXaxis()->SetRange(1,7);
   shift_stat_1__8805->GetXaxis()->SetLabelFont(42);
   shift_stat_1__8805->GetXaxis()->SetTitleFont(42);
   shift_stat_1__8805->GetYaxis()->SetLabelFont(42);
   shift_stat_1__8805->GetYaxis()->SetLabelSize(0.05);
   shift_stat_1__8805->GetYaxis()->SetTitleSize(0.05);
   shift_stat_1__8805->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_1__8805->GetYaxis()->SetTitleFont(42);
   shift_stat_1__8805->GetZaxis()->SetLabelFont(42);
   shift_stat_1__8805->GetZaxis()->SetLabelSize(0.05);
   shift_stat_1__8805->GetZaxis()->SetTitleSize(0.05);
   shift_stat_1__8805->GetZaxis()->SetTitleOffset(1);
   shift_stat_1__8805->GetZaxis()->SetTitleFont(42);
   shift_stat_1__8805->Draw("SAME PZ");
   Double_t xAxis966[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__8806 = new TH1D("chist_copy__8806","",8, xAxis966);
   chist_copy__8806->SetMinimum(-0.6);
   chist_copy__8806->SetMaximum(2);
   chist_copy__8806->SetDirectory(nullptr);
   chist_copy__8806->SetStats(0);
   chist_copy__8806->SetLineColor(0);
   chist_copy__8806->SetLineWidth(0);
   chist_copy__8806->SetMarkerColor(0);
   chist_copy__8806->SetMarkerStyle(20);
   chist_copy__8806->SetMarkerSize(0);
   chist_copy__8806->GetXaxis()->SetRange(1,7);
   chist_copy__8806->GetXaxis()->SetNdivisions(4000510);
   chist_copy__8806->GetXaxis()->SetLabelFont(42);
   chist_copy__8806->GetXaxis()->SetLabelSize(0);
   chist_copy__8806->GetXaxis()->SetTitleSize(0.08);
   chist_copy__8806->GetXaxis()->SetTickLength(0.04);
   chist_copy__8806->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__8806->GetXaxis()->SetTitleFont(42);
   chist_copy__8806->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__8806->GetYaxis()->SetNdivisions(3000510);
   chist_copy__8806->GetYaxis()->SetLabelFont(42);
   chist_copy__8806->GetYaxis()->SetLabelSize(0.08);
   chist_copy__8806->GetYaxis()->SetTitleSize(0.08);
   chist_copy__8806->GetYaxis()->SetTickLength(0.04);
   chist_copy__8806->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__8806->GetYaxis()->SetTitleFont(42);
   chist_copy__8806->GetZaxis()->SetLabelFont(42);
   chist_copy__8806->GetZaxis()->SetLabelSize(0.05);
   chist_copy__8806->GetZaxis()->SetTitleSize(0.05);
   chist_copy__8806->GetZaxis()->SetTitleOffset(1);
   chist_copy__8806->GetZaxis()->SetTitleFont(42);
   chist_copy__8806->Draw("sameaxis");
   up__1807->Modified();
   c1_n75->cd();
   c1_n75->Modified();
   c1_n75->SetSelected(c1_n75);
}
