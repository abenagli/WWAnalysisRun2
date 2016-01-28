#ifndef __setOutputTree__
#define __setOutputTree__

#include "TTree.h"
#include "TChain.h"

class setOutputTree {

 public:

  TTree* fTree;
  
  int run;
  int event;
  int lumi;
  int njets;
  int nPV;
  int issignal;
  int issignal_AK10;
  int issignal_AK12;
  int issignal_PuppiAK8;
  float wSampleWeight;
  float genWeight;
  float top1_NNLO_Weight;
  float top2_NNLO_Weight;
  float trig_eff_Weight;
  float id_eff_Weight;
  float gen_top1_pt;
  float gen_top2_pt;
  float totalEventWeight;
  float totalEventWeight_2;
  float totalEventWeight_3;
  float eff_and_pu_Weight;
  float eff_and_pu_Weight_2;
  float eff_and_pu_Weight_3;
  float pfMET;
  float pfMET_jes_up;
  float pfMET_jes_dn;
  float pfMET_jer;
  float pfMET_jer_up;
  float pfMET_jer_dn;
  float pfMET_Phi;
  float nu_pz_type0;
  float nu_pz_type2;
  float nu_pz_run2;
  float nu_pz_run2_oth;
  int nu_pz_run2_type;
  int nu_pz_isre;
  float l_pt;
  float l_eta;
  float l_phi;
  float l_e;
  float ungroomed_jet_pt;
  float ungroomed_jet_pt_jes_up;
  float ungroomed_jet_pt_jes_dn; 
  float ungroomed_jet_pt_jer;
  float ungroomed_jet_pt_jer_up;
  float ungroomed_jet_pt_jer_dn;
  float ungroomed_jet_eta;
  float ungroomed_jet_phi;
  float ungroomed_jet_e;
  float jet_mass_pr;
  float jet_mass_pr_jes_up;
  float jet_mass_pr_jes_dn;
  float jet_mass_pr_jer;
  float jet_mass_pr_jer_up;
  float jet_mass_pr_jer_dn;
  float jet_mass_so;
  float jet_pt_so;
  float jet_mass_tr;
  float jet_mass_fi;
  float jet_mass;
  float jet_tau2tau1;
  float ttb_ungroomed_jet_pt;
  float ttb_ungroomed_jet_eta;
  float ttb_ungroomed_jet_phi;
  float ttb_ungroomed_jet_e;
  float ttb_jet_mass_pr;
  float ttb_jet_mass_so;
  float ttb_jet_pt_so;
  float ttb_jet_mass_tr;
  float ttb_jet_mass_fi;
  float ttb_jet_tau2tau1;
  float ttb_deltaeta_lak8jet;
  float ungroomed_AK10_jet_pt;
  float ungroomed_AK10_jet_pt_jes_up;
  float ungroomed_AK10_jet_pt_jes_dn; 
  float ungroomed_AK10_jet_pt_jer;
  float ungroomed_AK10_jet_pt_jer_up;
  float ungroomed_AK10_jet_pt_jer_dn;
  float ungroomed_AK10_jet_eta;
  float ungroomed_AK10_jet_phi;
  float ungroomed_AK10_jet_e;
  float AK10_jet_mass_pr;
  float AK10_jet_mass_pr_jes_up;
  float AK10_jet_mass_pr_jes_dn;
  float AK10_jet_mass_pr_jer;
  float AK10_jet_mass_pr_jer_up;
  float AK10_jet_mass_pr_jer_dn;
  float AK10_jet_mass_so;
  float AK10_jet_pt_so;
  float AK10_jet_mass_tr;
  float AK10_jet_mass_fi;
  float AK10_jet_mass;
  float AK10_jet_tau2tau1;
  float ungroomed_AK12_jet_pt;
  float ungroomed_AK12_jet_pt_jes_up;
  float ungroomed_AK12_jet_pt_jes_dn; 
  float ungroomed_AK12_jet_pt_jer;
  float ungroomed_AK12_jet_pt_jer_up;
  float ungroomed_AK12_jet_pt_jer_dn;
  float ungroomed_AK12_jet_eta;
  float ungroomed_AK12_jet_phi;
  float ungroomed_AK12_jet_e;
  float AK12_jet_mass_pr;
  float AK12_jet_mass_pr_jes_up;
  float AK12_jet_mass_pr_jes_dn;
  float AK12_jet_mass_pr_jer;
  float AK12_jet_mass_pr_jer_up;
  float AK12_jet_mass_pr_jer_dn;
  float AK12_jet_mass_so;
  float AK12_jet_pt_so;
  float AK12_jet_mass_tr;
  float AK12_jet_mass_fi;
  float AK12_jet_mass;
  float AK12_jet_tau2tau1;
  float ungroomed_PuppiAK8_jet_pt;
  float ungroomed_PuppiAK8_jet_pt_jes_up;
  float ungroomed_PuppiAK8_jet_pt_jes_dn; 
  float ungroomed_PuppiAK8_jet_pt_jer;
  float ungroomed_PuppiAK8_jet_pt_jer_up;
  float ungroomed_PuppiAK8_jet_pt_jer_dn;
  float ungroomed_PuppiAK8_jet_eta;
  float ungroomed_PuppiAK8_jet_phi;
  float ungroomed_PuppiAK8_jet_e;
  float PuppiAK8_jet_mass_pr;
  float PuppiAK8_jet_mass_pr_jes_up;
  float PuppiAK8_jet_mass_pr_jes_dn;
  float PuppiAK8_jet_mass_pr_jer;
  float PuppiAK8_jet_mass_pr_jer_up;
  float PuppiAK8_jet_mass_pr_jer_dn;
  float PuppiAK8_jet_mass_so;
  float PuppiAK8_jet_pt_so;
  float PuppiAK8_jet_mass_tr;
  float PuppiAK8_jet_mass_fi;
  float PuppiAK8_jet_mass;
  float PuppiAK8_jet_tau2tau1;
  float W_pt_gen;
  float W_pz_gen;
  float W_rap_gen;
  float genGravMass;
  float nu_pz_gen;
  float nu_pt_gen;
  float nu_phi_gen;
  float nu_eta_gen;
  float hadW_pt_gen;
  float hadW_eta_gen;
  float hadW_phi_gen;
  float hadW_e_gen;
  float hadW_m_gen;
  float lepW_pt_gen;
  float lepW_eta_gen;
  float lepW_phi_gen;
  float lepW_e_gen;
  float lepW_m_gen;
  float AK8_pt_gen;
  float AK8_eta_gen;
  float AK8_phi_gen;
  float AK8_e_gen;
  float AK8_mass_gen;
  float AK8_pruned_mass_gen;
  float AK8_softdrop_mass_gen;
  float AK8_softdrop_pt_gen;
  float AK10_pt_gen;
  float AK10_eta_gen;
  float AK10_phi_gen;
  float AK10_e_gen;
  float AK10_pruned_mass_gen;
  float AK10_softdrop_mass_gen;
  float AK10_softdrop_pt_gen;
  float AK12_pt_gen;
  float AK12_eta_gen;
  float AK12_phi_gen;
  float AK12_e_gen;
  float AK12_pruned_mass_gen;
  float AK12_softdrop_mass_gen;
  float AK12_softdrop_pt_gen;
  float deltaR_lak8jet;
  float deltaphi_METak8jet;
  float deltaphi_Vak8jet;
  float deltaR_lak10jet;
  float deltaphi_METak10jet;
  float deltaphi_Vak10jet;
  float deltaR_lak12jet;
  float deltaphi_METak12jet;
  float deltaphi_Vak12jet;
  float deltaR_lPuppiak8jet;
  float deltaphi_METPuppiak8jet;
  float deltaphi_VPuppiak8jet;
  float v_pt;
  float v_eta;
  float v_phi;
  float v_mt;
  float mass_lvj_type0;
  float mass_lvj_type0_met_jes_up;
  float mass_lvj_type0_met_jes_dn;
  float mass_lvj_type0_met_jer;
  float mass_lvj_type0_met_jer_up;
  float mass_lvj_type0_met_jer_dn;
  float mass_lvj_type2;
  float mass_lvj_run2;
  float mass_lvj_type0_AK10;
  float mass_lvj_type2_AK10;
  float mass_lvj_run2_AK10;
  float mass_lvj_type0_AK12;
  float mass_lvj_type2_AK12;
  float mass_lvj_run2_AK12;
  float mass_lvj_type0_PuppiAK8;
  float mass_lvj_type2_PuppiAK8;
  float mass_lvj_run2_PuppiAK8;
  float mass_leptonic_closerjet;
  float mass_ungroomedjet_closerjet;
  float AK8_closerjet_pt;
  float AK8_closerjet_eta;
  float AK8_closerjet_phi;
  float AK8_closerjet_e;
  int nBTagJet_loose;
  int nBTagJet_medium;
  int nBTagJet_tight;
  float vbf_maxpt_j1_pt;
  float vbf_maxpt_j1_pt_jes_up;
  float vbf_maxpt_j1_pt_jes_dn;
  float vbf_maxpt_j1_pt_jer;
  float vbf_maxpt_j1_pt_jer_up;
  float vbf_maxpt_j1_pt_jer_dn;
  float vbf_maxpt_j1_eta;
  float vbf_maxpt_j1_eta_jes_up;
  float vbf_maxpt_j1_eta_jes_dn;
  float vbf_maxpt_j1_eta_jer;
  float vbf_maxpt_j1_eta_jer_up;
  float vbf_maxpt_j1_eta_jer_dn;
  float vbf_maxpt_j1_phi;
  float vbf_maxpt_j1_e;
  float vbf_maxpt_j1_bDiscriminatorCSV;
  float vbf_maxpt_j2_pt;
  float vbf_maxpt_j2_pt_jes_up;
  float vbf_maxpt_j2_pt_jes_dn;
  float vbf_maxpt_j2_pt_jer;
  float vbf_maxpt_j2_pt_jer_up;
  float vbf_maxpt_j2_pt_jer_dn;
  float vbf_maxpt_j2_eta;
  float vbf_maxpt_j2_eta_jes_up;
  float vbf_maxpt_j2_eta_jes_dn;
  float vbf_maxpt_j2_eta_jer;
  float vbf_maxpt_j2_eta_jer_up;
  float vbf_maxpt_j2_eta_jer_dn;
  float vbf_maxpt_j2_phi;
  float vbf_maxpt_j2_e;
  float vbf_maxpt_j2_bDiscriminatorCSV;
  float vbf_maxpt_jj_pt;
  float vbf_maxpt_jj_eta;
  float vbf_maxpt_jj_phi;
  float vbf_maxpt_jj_m;
  float jet2_pt;
  float jet2_eta;
  float jet2_phi;
  float jet2_e;
  float jet2_btag;
  float jet3_pt;
  float jet3_eta;
  float jet3_phi;
  float jet3_e;
  float jet3_btag;
  float deltaR_AK8_closestBtagJet;
  float deltaR_AK8_closestBtagJet_loose;
  float vbf_maxpt_deltaR;
  float AK4_1_pt_gen;
  float AK4_1_eta_gen;
  float AK4_1_phi_gen;
  float AK4_1_e_gen;
  float AK4_1_mass_gen;
  float AK4_2_pt_gen;
  float AK4_2_eta_gen;
  float AK4_2_phi_gen;
  float AK4_2_e_gen;
  float AK4_2_mass_gen;
  float AK4_BIG_gen_mass;
  float deltaR_AK4;

  setOutputTree(TTree* outputTree);
  //  setOutputTree(TTree *outputTree=0);
  //  setOutputTree(TFile *outputFile=0, std::string outputTreeName="WWTree");
  ~setOutputTree();

  void initializeVariables();
  
  void setBranches();

};

#endif
