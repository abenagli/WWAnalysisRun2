#include "../interface/setOutputTreeSynch.h"

setOutputTreeSynch::setOutputTreeSynch(TTree* outTree){
  fTree = outTree;
  setBranches();
}

setOutputTreeSynch::~setOutputTreeSynch(){
  delete fTree;
}

void setOutputTreeSynch::initializeVariables()
{
  run=-99;
  event=-99;
  lumi=-99;
  nPV=-99;
  pfMET=-99;
  pfMETPhi=-99;
  nLooseEle=-99;
  nLooseMu=-99;
  l_pt=-99;
  l_eta=-99;
  l_phi=-99;
  jet_pt=-99;
  jet_eta=-99;
  jet_phi=-99;
  jet_mass_pruned=-99;
  jet_mass_softdrop=-99;
  jet_tau2tau1=-99;
  W_pt=-99;
  W_eta=-99;
  W_phi=-99;
  m_lvj=-99;
  njets=-99;
  nbtag=-99;
  jet2_pt=-99;
  jet2_eta=-99;
  jet2_phi=-99;
  jet2_btag=-99;
  jet3_pt=-99;
  jet3_eta=-99;
  jet3_phi=-99;
  jet3_btag=-99;

  issignal=-999;
  wSampleWeight=-999;
  totalEventWeight=-999;
  eff_and_pu_Weight=-999;
  nu_pz_type0=-999;
  nu_pz_type2=-999;
  nu_pz_run2=-999;
  nu_pz_run2_oth=-999;
  nu_pz_run2_type=-999;
  nu_pz_isre=1;
  l_e=-999;
  W_pt_gen=-999;
  W_pz_gen=-999;
  W_rap_gen=-999;
  genGravMass=-999;
  nu_pz_gen=-999;
  nu_pt_gen=-999;
  nu_phi_gen=-999;
  nu_eta_gen=-999;
  deltaR_lak8jet=-999;
  deltaphi_METak8jet=-999;
  deltaphi_Vak8jet=-999;
  W_mt=-999;
  mass_lvj_type0=-999;
  mass_lvj_run2=-999;
  nBTagJet_loose=-999;
  nBTagJet_tight=-999;
  jet_e=-999;
  jet_mass_tr=-999;
  jet_mass_fi=-999;
  jet_tau2tau1=-999;
  mass_leptonic_closerjet=-999;
  mass_ungroomedjet_closerjet=-999;
  vbf_maxpt_j1_pt=-999;
  vbf_maxpt_j1_eta=-999;
  vbf_maxpt_j1_phi=-999;
  vbf_maxpt_j1_e=-999;
  vbf_maxpt_j1_bDiscriminatorCSV=-999;
  vbf_maxpt_j2_pt=-999;
  vbf_maxpt_j2_eta=-999;
  vbf_maxpt_j2_phi=-999;
  vbf_maxpt_j2_e=-999;
  vbf_maxpt_j2_bDiscriminatorCSV=-999;
  vbf_maxpt_jj_pt=-999;
  vbf_maxpt_jj_eta=-999;
  vbf_maxpt_jj_phi=-999;
  vbf_maxpt_jj_m=-999;
}

void setOutputTreeSynch::setBranches()
{
  fTree->Branch("run",&run,"run/I");
  fTree->Branch("event",&event,"event/I");
  fTree->Branch("lumi",&lumi,"lumi/I");
  fTree->Branch("nPV",&nPV,"nPV/I");
  fTree->Branch("pfMET",&pfMET,"pfMET/F");
  fTree->Branch("pfMETPhi",&pfMETPhi,"pfMETPhi/F");
  fTree->Branch("nLooseEle",&nLooseEle,"nLooseEle/I");
  fTree->Branch("nLooseMu",&nLooseMu,"nLooseMu/I");
  fTree->Branch("l_pt",&l_pt,"l_pt/F");
  fTree->Branch("l_eta",&l_eta,"l_eta/F");
  fTree->Branch("l_phi",&l_phi,"l_phi/F");
  fTree->Branch("jet_pt",&jet_pt,"jet_pt/F");
  fTree->Branch("jet_eta",&jet_eta,"jet_eta/F");
  fTree->Branch("jet_phi",&jet_phi,"jet_phi/F");
  fTree->Branch("jet_mass_pruned",&jet_mass_pruned,"jet_mass_pruned");
  fTree->Branch("jet_mass_softdrop",&jet_mass_softdrop,"jet_mass_softdrop");
  fTree->Branch("jet_tau2tau1",&jet_tau2tau1,"jet_tau2tau1");
  fTree->Branch("W_pt",&W_pt,"W_pt/F");
  fTree->Branch("W_eta",&W_eta,"W_eta/F");
  fTree->Branch("W_phi",&W_phi,"W_phi/F");
  fTree->Branch("m_lvj",&m_lvj,"m_lvj/F");
  fTree->Branch("njets",&njets,"njets/I");
  fTree->Branch("nbtag",&nbtag,"nbtag/I");
  fTree->Branch("jet2_pt",&jet2_pt,"jet2_pt/F");
  fTree->Branch("jet2_eta",&jet2_eta,"jet2_eta/F");
  fTree->Branch("jet2_phi",&jet2_phi,"jet2_phi/F");
  fTree->Branch("jet2_btag",&jet2_btag,"jet2_btag/F");
  fTree->Branch("jet3_pt",&jet3_pt,"jet3_pt/F");
  fTree->Branch("jet3_eta",&jet3_eta,"jet3_eta/F");
  fTree->Branch("jet3_phi",&jet3_phi,"jet3_phi/F");
  fTree->Branch("jet3_btag",&jet3_btag,"jet3_btag/F");

  fTree->Branch("issignal",&issignal,"issignal/I");
  fTree->Branch("wSampleWeight",&wSampleWeight,"wSampleWeight/F");
  fTree->Branch("totalEventWeight",&totalEventWeight,"totalEventWeight/F");
  fTree->Branch("eff_and_pu_Weight",&eff_and_pu_Weight,"eff_and_pu_Weight/F");
  fTree->Branch("nu_pz_type0",&nu_pz_type0,"nu_pz_type0/F");
  fTree->Branch("nu_pz_type2",&nu_pz_type2,"nu_pz_type2/F");
  fTree->Branch("nu_pz_run2",&nu_pz_run2,"nu_pz_run2/F");
  fTree->Branch("nu_pz_run2_oth",&nu_pz_run2_oth,"nu_pz_run2_oth/F");
  fTree->Branch("nu_pz_run2_type",&nu_pz_run2_type,"nu_pz_run2_type/I");
  fTree->Branch("nu_pz_isre",&nu_pz_isre,"nu_pz_isre/I");
  fTree->Branch("l_e",&l_e,"l_e/F");
  fTree->Branch("jet_e",&jet_e,"jet_e/F");
  fTree->Branch("jet_mass_tr",&jet_mass_tr,"jet_mass_tr");
  fTree->Branch("jet_mass_fi",&jet_mass_fi,"jet_mass_fi");
  fTree->Branch("jet_tau2tau1",&jet_tau2tau1,"jet_tau2tau1");
  fTree->Branch("W_pt_gen",&W_pt_gen,"W_pt_gen");
  fTree->Branch("W_pz_gen",&W_pz_gen,"W_pz_gen");
  fTree->Branch("W_rap_gen",&W_rap_gen,"W_rap_gen");
  fTree->Branch("genGravMass",&genGravMass,"genGravMass");
  fTree->Branch("nu_pz_gen",&nu_pz_gen,"nu_pz_gen");
  fTree->Branch("nu_pt_gen",&nu_pt_gen,"nu_pt_gen");
  fTree->Branch("nu_phi_gen",&nu_phi_gen,"nu_phi_gen");
  fTree->Branch("nu_eta_gen",&nu_eta_gen,"nu_eta_gen");
  fTree->Branch("deltaR_lak8jet",&deltaR_lak8jet,"deltaR_lak8jet/F");
  fTree->Branch("deltaphi_METak8jet",&deltaphi_METak8jet,"deltaphi_METak8jet/F");
  fTree->Branch("deltaphi_Vak8jet",&deltaphi_Vak8jet,"deltaphi_Vak8jet/F");
  fTree->Branch("W_mt",&W_mt,"W_mt/F");
  fTree->Branch("mass_lvj_type0",&mass_lvj_type0,"mass_lvj_type0/F");
  fTree->Branch("mass_lvj_run2",&mass_lvj_run2,"mass_lvj_run2/F");
  fTree->Branch("nBTagJet_loose",&nBTagJet_loose,"nBTagJet_loose/I");
  fTree->Branch("nBTagJet_tight",&nBTagJet_tight,"nBTagJet_tight/I");
  fTree->Branch("mass_leptonic_closerjet",&mass_leptonic_closerjet,"mass_leptonic_closerjet/F");
  fTree->Branch("mass_ungroomedjet_closerjet",&mass_ungroomedjet_closerjet,"mass_ungroomedjet_closerjet/F");
  fTree->Branch("vbf_maxpt_j1_pt",&vbf_maxpt_j1_pt,"vbf_maxpt_j1_pt/F");
  fTree->Branch("vbf_maxpt_j1_eta",&vbf_maxpt_j1_eta,"vbf_maxpt_j1_eta/F");
  fTree->Branch("vbf_maxpt_j1_phi",&vbf_maxpt_j1_phi,"vbf_maxpt_j1_phi/F");
  fTree->Branch("vbf_maxpt_j1_e",&vbf_maxpt_j1_e,"vbf_maxpt_j1_e/F");
  fTree->Branch("vbf_maxpt_j1_bDiscriminatorCSV",&vbf_maxpt_j1_bDiscriminatorCSV,"vbf_maxpt_j1_bDiscriminatorCSV/F");
  fTree->Branch("vbf_maxpt_j2_pt",&vbf_maxpt_j2_pt,"vbf_maxpt_j2_pt/F");
  fTree->Branch("vbf_maxpt_j2_eta",&vbf_maxpt_j2_eta,"vbf_maxpt_j2_eta/F");
  fTree->Branch("vbf_maxpt_j2_phi",&vbf_maxpt_j2_phi,"vbf_maxpt_j2_phi/F");
  fTree->Branch("vbf_maxpt_j2_e",&vbf_maxpt_j2_e,"vbf_maxpt_j2_e/F");
  fTree->Branch("vbf_maxpt_j2_bDiscriminatorCSV",&vbf_maxpt_j2_bDiscriminatorCSV,"vbf_maxpt_j2_bDiscriminatorCSV/F");
  fTree->Branch("vbf_maxpt_jj_pt",&vbf_maxpt_jj_pt,"vbf_maxpt_jj_pt/F");
  fTree->Branch("vbf_maxpt_jj_eta",&vbf_maxpt_jj_eta,"vbf_maxpt_jj_eta/F");
  fTree->Branch("vbf_maxpt_jj_phi",&vbf_maxpt_jj_phi,"vbf_maxpt_jj_phi/F");
  fTree->Branch("vbf_maxpt_jj_m",&vbf_maxpt_jj_m,"vbf_maxpt_jj_m/F");
}


