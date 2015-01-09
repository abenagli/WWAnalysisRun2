#include "../interface/initInputTree.h"

// Declaration of leaf types
unsigned int RunNum;
unsigned int EvtNum;
float MET;
unsigned int NJets;
unsigned int BTags;
unsigned int NVtx;
std::vector<float> *selectedIDIsoElectronsPt=0;
std::vector<float> *selectedIDIsoElectronsEta=0;
std::vector<float> *selectedIDIsoElectronsPhi=0;
std::vector<float> *selectedIDIsoElectronsE=0;
unsigned int selectedIDIsoElectronsNum;
std::vector<float> *selectedIDIsoMuonsPt=0;
std::vector<float> *selectedIDIsoMuonsEta=0;
std::vector<float> *selectedIDIsoMuonsPhi=0;
std::vector<float> *selectedIDIsoMuonsE=0;
unsigned int selectedIDIsoMuonsNum;
std::vector<float> *GenBosonPt=0;
std::vector<float> *GenBosonEta=0;
std::vector<float> *GenBosonPhi=0;
std::vector<float> *GenBosonE=0;
std::vector<int> *  GenBosonPDGId=0;
std::vector<float> *GenMuPt=0;
std::vector<float> *GenMuEta=0;
std::vector<float> *GenMuPhi=0;
std::vector<float> *GenMuE=0;
std::vector<float> *GenElecPt=0;
std::vector<float> *GenElecEta=0;
std::vector<float> *GenElecPhi=0;
std::vector<float> *GenElecE=0;
unsigned int MHTJetsNum;
std::vector<float> *MHTJetsPt=0;
std::vector<float> *MHTJetsEta=0;
std::vector<float> *MHTJetsPhi=0;
std::vector<float> *MHTJetsE=0;
std::vector<float> *MHTJets_bDiscriminator=0;

// List of branches
TBranch *b_RunNum; 
TBranch *b_EvtNum; 
TBranch *b_MET; 
TBranch *b_NJets;
TBranch *b_BTags;
TBranch *b_NVtx;
TBranch *b_selectedIDIsoElectronsPt;
TBranch *b_selectedIDIsoElectronsEta;
TBranch *b_selectedIDIsoElectronsPhi;
TBranch *b_selectedIDIsoElectronsE;
TBranch *b_selectedIDIsoElectronsNum;
TBranch *b_selectedIDIsoMuonsPt;
TBranch *b_selectedIDIsoMuonsEta;
TBranch *b_selectedIDIsoMuonsPhi;
TBranch *b_selectedIDIsoMuonsE;
TBranch *b_selectedIDIsoMuonsNum;
TBranch *b_GenBosonPt;
TBranch *b_GenBosonEta;
TBranch *b_GenBosonPhi;
TBranch *b_GenBosonE;
TBranch *b_GenBosonPDGId;
TBranch *b_GenMuPt;
TBranch *b_GenMuEta;
TBranch *b_GenMuPhi;
TBranch *b_GenMuE;
TBranch *b_GenElecPt;
TBranch *b_GenElecEta;
TBranch *b_GenElecPhi;
TBranch *b_GenElecE;
TBranch *b_MHTJetsNum;
TBranch *b_MHTJetsPt;
TBranch *b_MHTJetsEta;
TBranch *b_MHTJetsPhi;
TBranch *b_MHTJetsE;
TBranch *b_MHTJets_bDiscriminator;

void InitTree(TChain* nt)
{
  nt->SetBranchAddress("RunNum", &RunNum, &b_RunNum);
  nt->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);
  nt->SetBranchAddress("MET", &MET, &b_MET);
  nt->SetBranchAddress("NJets", &NJets, &b_NJets);
  nt->SetBranchAddress("BTags", &BTags, &b_BTags);
  nt->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
  nt->SetBranchAddress("selectedIDIsoElectronsPt",  &selectedIDIsoElectronsPt,  &b_selectedIDIsoElectronsPt);
  nt->SetBranchAddress("selectedIDIsoElectronsEta", &selectedIDIsoElectronsEta, &b_selectedIDIsoElectronsEta);
  nt->SetBranchAddress("selectedIDIsoElectronsPhi", &selectedIDIsoElectronsPhi, &b_selectedIDIsoElectronsPhi);
  nt->SetBranchAddress("selectedIDIsoElectronsE",   &selectedIDIsoElectronsE,   &b_selectedIDIsoElectronsE);
  nt->SetBranchAddress("selectedIDIsoElectronsNum", &selectedIDIsoElectronsNum, &b_selectedIDIsoElectronsNum);
  nt->SetBranchAddress("selectedIDIsoMuonsPt",  &selectedIDIsoMuonsPt,  &b_selectedIDIsoMuonsPt);
  nt->SetBranchAddress("selectedIDIsoMuonsEta", &selectedIDIsoMuonsEta, &b_selectedIDIsoMuonsEta);
  nt->SetBranchAddress("selectedIDIsoMuonsPhi", &selectedIDIsoMuonsPhi, &b_selectedIDIsoMuonsPhi);
  nt->SetBranchAddress("selectedIDIsoMuonsE",   &selectedIDIsoMuonsE,   &b_selectedIDIsoMuonsE);
  nt->SetBranchAddress("selectedIDIsoMuonsNum", &selectedIDIsoMuonsNum, &b_selectedIDIsoMuonsNum);
  nt->SetBranchAddress("GenBosonPt",  &GenBosonPt,  &b_GenBosonPt);
  nt->SetBranchAddress("GenBosonEta", &GenBosonEta, &b_GenBosonEta);
  nt->SetBranchAddress("GenBosonPhi", &GenBosonPhi, &b_GenBosonPhi);
  nt->SetBranchAddress("GenBosonE",   &GenBosonE,   &b_GenBosonE);
  nt->SetBranchAddress("GenBosonPDGId", &GenBosonPDGId, &b_GenBosonPDGId);
  nt->SetBranchAddress("GenMuPt",  &GenMuPt,  &b_GenMuPt);
  nt->SetBranchAddress("GenMuEta", &GenMuEta, &b_GenMuEta);
  nt->SetBranchAddress("GenMuPhi", &GenMuPhi, &b_GenMuPhi);
  nt->SetBranchAddress("GenMuE",   &GenMuE,   &b_GenMuE);
  nt->SetBranchAddress("GenElecPt",  &GenElecPt,  &b_GenElecPt);
  nt->SetBranchAddress("GenElecEta", &GenElecEta, &b_GenElecEta);
  nt->SetBranchAddress("GenElecPhi", &GenElecPhi, &b_GenElecPhi);
  nt->SetBranchAddress("GenElecE",   &GenElecE,   &b_GenElecE);
  nt->SetBranchAddress("MHTJetsPt",  &MHTJetsPt,  &b_MHTJetsPt);
  nt->SetBranchAddress("MHTJetsEta", &MHTJetsEta, &b_MHTJetsEta);
  nt->SetBranchAddress("MHTJetsPhi", &MHTJetsPhi, &b_MHTJetsPhi);
  nt->SetBranchAddress("MHTJetsE",   &MHTJetsE,   &b_MHTJetsE);
  nt->SetBranchAddress("MHTJetsNum",   &MHTJetsNum,   &b_MHTJetsNum);
  nt->SetBranchAddress("MHTJets_bDiscriminator",   &MHTJets_bDiscriminator,   &b_MHTJets_bDiscriminator);
}
