#include "IPHCFlatTree/FlatTreeProducer/interface/FlatTree.hh"

void FlatTree::Init()
{
   ev_run = DEFVAL;
   ev_id = DEFVAL;
   ev_lumi = DEFVAL;
   ev_rho = DEFVAL;
   
   met_pt = DEFVAL;
   met_phi = DEFVAL;
   met_sumet = DEFVAL;

   pv_x = DEFVAL;
   pv_y = DEFVAL;
   pv_z = DEFVAL;
   
   mc_weight = DEFVAL;
   mc_id = DEFVAL;
   mc_f1 = DEFVAL;
   mc_f2 = DEFVAL;
   mc_x1 = DEFVAL;
   mc_x2 = DEFVAL;
   mc_scale = DEFVAL;
   mc_ptHat = DEFVAL;
   
   mc_pu_intime_NumInt = DEFVAL;
   mc_pu_trueNumInt = DEFVAL;
   mc_pu_before_npu = DEFVAL;
   mc_pu_after_npu = DEFVAL;

   mc_pu_Npvi = DEFVAL;
   mc_pu_Nzpositions.clear();
   mc_pu_BunchCrossing.clear();
   for(unsigned int i=0;i<mc_pu_zpositions.size();i++) mc_pu_zpositions[i].clear();
   mc_pu_zpositions.clear();
   for(unsigned int i=0;i<mc_pu_sumpT_lowpT.size();i++) mc_pu_sumpT_lowpT[i].clear();
   mc_pu_sumpT_lowpT.clear();
   for(unsigned int i=0;i<mc_pu_sumpT_highpT.size();i++) mc_pu_sumpT_highpT[i].clear();
   mc_pu_sumpT_highpT.clear();
   for(unsigned int i=0;i<mc_pu_ntrks_lowpT.size();i++) mc_pu_ntrks_lowpT[i].clear();
   mc_pu_ntrks_lowpT.clear();
   for(unsigned int i=0;i<mc_pu_ntrks_highpT.size();i++) mc_pu_ntrks_highpT[i].clear();
   mc_pu_ntrks_highpT.clear();
   
   el_n = 0;
   el_pt.clear();
   el_eta.clear();
   el_phi.clear();
   el_m.clear();
   el_E.clear();
   el_id.clear();
   el_charge.clear();
	
   el_scleta.clear();
   el_isGsfCtfScPixChargeConsistent.clear();
   el_passConversionVeto.clear();
   el_dB3D.clear();
   el_edB3D.clear();
   
   el_neutralHadronIso.clear();
   el_chargedHadronIso.clear();
   el_puChargedHadronIso.clear();
   el_ecalIso.clear();
   el_hcalIso.clear();
   el_particleIso.clear();
   el_photonIso.clear();
   el_trackIso.clear();

   el_pfIso_sumChargedHadronPt.clear();
   el_pfIso_sumNeutralHadronEt.clear();
   el_pfIso_sumPhotonEt.clear();
   el_pfIso_sumPUPt.clear();
   
   el_miniIso.clear();
   
   el_isLoose.clear();
   el_isTight.clear();
   el_isRobustLoose.clear();
   el_isRobustTight.clear();
   el_isRobustHighEnergy.clear();
   
   el_vx.clear();
   el_vy.clear();
   el_vz.clear();
   
   el_isGsf.clear();
   el_dxy.clear();
   el_dz.clear();
   el_dxyError.clear();
   el_dzError.clear();
   
   el_numberOfHits.clear();

   el_sigmaIetaIeta.clear();
   el_sigmaIphiIphi.clear();
   el_hadronicOverEm.clear();
   el_dr03TkSumPt.clear();
   el_dr03EcalRecHitSumEt.clear();
   el_dr03HcalTowerSumEt.clear();
   el_numberOfLostHits.clear();

   el_fbrem.clear();
   el_kf_normalizedChi2.clear();
   el_trackerLayersWithMeasurement.clear();
   el_gsf_normalizedChi2.clear();
   el_deltaEtaSuperClusterTrackAtVtx.clear();
   el_deltaPhiSuperClusterTrackAtVtx.clear();
   el_deltaEtaSeedClusterTrackAtCalo.clear();
   el_see.clear();
   el_spp.clear();
   el_superClusterEtaWidth.clear();
   el_superClusterPhiWidth.clear();
   el_full5x5_OneMinusE1x5E5x5.clear();
   el_OneMinusE1x5E5x5.clear();
   el_full5x5_r9.clear();
   el_r9.clear();
   el_eSuperClusterOverP.clear();
   el_IoEmIoP.clear();
   el_eleEoPout.clear();
   el_PreShowerOverRaw.clear();
   
   el_mvaNonTrigV0.clear();
   
   el_lepMVA.clear();

   el_lepMVA_neuRelIso.clear();
   el_lepMVA_chRelIso.clear();
   el_lepMVA_jetDR.clear();
   el_lepMVA_jetPtRatio.clear();
   el_lepMVA_jetBTagCSV.clear();
   el_lepMVA_sip3d.clear();
   el_lepMVA_mvaId.clear();
   el_lepMVA_innerHits.clear();
   
   el_hasMCMatch.clear();
   el_gen_pt.clear();
   el_gen_eta.clear();
   el_gen_phi.clear();
   el_gen_m.clear();
   el_gen_status.clear();
   el_gen_id.clear();
   el_gen_charge.clear();
   el_gen_dr.clear();
   
   el_hasMatchedConversion.clear();
   
   mu_n = 0;
   mu_pt.clear();
   mu_eta.clear();
   mu_phi.clear();
   mu_m.clear();
   mu_E.clear();
   mu_id.clear();
   mu_charge.clear();
   
   mu_dB3D.clear();
   mu_edB3D.clear();
	
   mu_neutralHadronIso.clear();
   mu_chargedHadronIso.clear();
   mu_puChargedHadronIso.clear();
   mu_ecalIso.clear();
   mu_hcalIso.clear();
   mu_photonIso.clear();
   mu_trackIso.clear();

   mu_pfIso03_sumChargedHadronPt.clear();
   mu_pfIso03_sumNeutralHadronEt.clear();
   mu_pfIso03_sumPhotonEt.clear();
   mu_pfIso03_sumPUPt.clear();

   mu_miniIso.clear();
   
   mu_isGlobalMuon.clear();
   mu_isTrackerMuon.clear();
   mu_isStandAloneMuon.clear();
   mu_isCaloMuon.clear();
   mu_isPFMuon.clear();
   
   mu_vx.clear();
   mu_vy.clear();
   mu_vz.clear();
   
   mu_isTightMuon.clear();
   
   mu_hasGlobalTrack.clear();
   mu_globalTrack_dxy.clear();
   mu_globalTrack_dz.clear();
   mu_globalTrack_dxyError.clear();
   mu_globalTrack_dzError.clear();

   mu_hasInnerTrack.clear();
   mu_innerTrack_dxy.clear();
   mu_innerTrack_dz.clear();
   mu_innerTrack_dxyError.clear();
   mu_innerTrack_dzError.clear();

   mu_bestTrack_dxy.clear();
   mu_bestTrack_dz.clear();
   mu_bestTrack_dxyError.clear();
   mu_bestTrack_dzError.clear();
   
   mu_innerTrack_pt.clear();
   mu_innerTrack_ptError.clear();
   
   mu_numberOfMatches.clear();
   mu_numberOfValidMuonHits.clear();   

   mu_lepMVA.clear();

   mu_lepMVA_neuRelIso.clear();
   mu_lepMVA_chRelIso.clear();
   mu_lepMVA_jetDR.clear();
   mu_lepMVA_jetPtRatio.clear();
   mu_lepMVA_jetBTagCSV.clear();
   mu_lepMVA_sip3d.clear();
   mu_lepMVA_dxy.clear();
   mu_lepMVA_dz.clear();
   
   mu_hasMCMatch.clear();
   mu_gen_pt.clear();
   mu_gen_eta.clear();
   mu_gen_phi.clear();
   mu_gen_m.clear();
   mu_gen_status.clear();
   mu_gen_id.clear();
   mu_gen_charge.clear();
   mu_gen_dr.clear();
   
   jet_n = 0;
   jet_pt.clear();
   jet_eta.clear();
   jet_phi.clear();
   jet_m.clear();
   jet_E.clear();
   
   jet_ntrk.clear();

   jet_JBP.clear();
   jet_JP.clear();
   jet_TCHP.clear();
   jet_TCHE.clear();
   jet_SSVHE.clear();
   jet_SSVHP.clear();
   jet_CMVA.clear();
   jet_CSV.clear();
   jet_CSVv2.clear();
   jet_flavour.clear();

   jet_neutralHadronEnergy.clear();
   jet_neutralEmEnergy.clear();
   jet_chargedHadronEnergy.clear();
   jet_chargedEmEnergy.clear();
   jet_electronEnergy.clear();
   jet_muonEnergy.clear();
   jet_photonEnergy.clear();
   
   jet_pileupJetId.clear();
   
   jet_gen_pt.clear();
   jet_gen_eta.clear();
   jet_gen_phi.clear();
   jet_gen_m.clear();
   jet_gen_E.clear();
   
   jet_gen_status.clear();
   jet_gen_id.clear();
}

void FlatTree::CreateBranches()
{
   if( doWrite("ev_run") ) tree->Branch("ev_run", &ev_run, "ev_run/I");
   if( doWrite("ev_id") ) tree->Branch("ev_id", &ev_id, "ev_id/I");
   if( doWrite("ev_lumi") ) tree->Branch("ev_lumi", &ev_lumi, "ev_lumi/I");
   if( doWrite("ev_rho") ) tree->Branch("ev_rho", &ev_rho, "ev_rho/F");
   
   if( doWrite("met_pt") ) tree->Branch("met_pt", &met_pt, "met_pt/F");
   if( doWrite("met_phi") ) tree->Branch("met_phi", &met_phi, "met_phi/F");
   if( doWrite("met_sumet") ) tree->Branch("met_sumet", &met_sumet, "met_sumet/F");
   
   if( doWrite("pv_x") ) tree->Branch("pv_x", &pv_x, "pv_x/F");
   if( doWrite("pv_y") ) tree->Branch("pv_y", &pv_y, "pv_y/F");
   if( doWrite("pv_z") ) tree->Branch("pv_z", &pv_z, "pv_z/F");
   
   if( doWrite("mc_weight") ) tree->Branch("mc_weight", &mc_weight, "mc_weight/F");
   if( doWrite("mc_id") ) tree->Branch("mc_id", &mc_id, "mc_id/I");
   if( doWrite("mc_f1") ) tree->Branch("mc_f1", &mc_f1, "mc_f1/I");
   if( doWrite("mc_f2") ) tree->Branch("mc_f2", &mc_f2, "mc_f2/I");
   if( doWrite("mc_x1") ) tree->Branch("mc_x1", &mc_x1, "mc_x1/F");
   if( doWrite("mc_x2") ) tree->Branch("mc_x2", &mc_x2, "mc_x2/F");
   if( doWrite("mc_scale") ) tree->Branch("mc_scale", &mc_scale, "mc_scale/F");
   if( doWrite("mc_ptHat") ) tree->Branch("mc_ptHat", &mc_ptHat, "mc_ptHat/F");
   
   if( doWrite("mc_pu_intime_NumInt") ) tree->Branch("mc_pu_intime_NumInt", &mc_pu_intime_NumInt, "mc_pu_intime_NumInt/I");
   if( doWrite("mc_pu_trueNumInt") ) tree->Branch("mc_pu_trueNumInt", &mc_pu_trueNumInt, "mc_pu_trueNumInt/I");
   if( doWrite("mc_pu_before_npu") ) tree->Branch("mc_pu_before_npu", &mc_pu_before_npu, "mc_pu_before_npu/I");
   if( doWrite("mc_pu_after_npu") ) tree->Branch("mc_pu_after_npu", &mc_pu_after_npu, "mc_pu_after_npu/I");
   
   if( doWrite("mc_pu_Npvi") ) tree->Branch("mc_pu_Npvi", &mc_pu_Npvi, "mc_pu_Npvi/I");
   if( doWrite("mc_pu_Nzpositions") ) tree->Branch("mc_pu_Nzpositions", "std::vector<int>", &mc_pu_Nzpositions);
   if( doWrite("mc_pu_BunchCrossing") ) tree->Branch("mc_pu_BunchCrossing", "std::vector<int>", &mc_pu_BunchCrossing);
   if( doWrite("mc_pu_zpositions") ) tree->Branch("mc_pu_zpositions", "std::vector<std::vector<float> >", &mc_pu_zpositions);
   if( doWrite("mc_pu_sumpT_lowpT") ) tree->Branch("mc_pu_sumpT_lowpT", "std::vector<std::vector<float> >", &mc_pu_sumpT_lowpT);
   if( doWrite("mc_pu_sumpT_highpT") ) tree->Branch("mc_pu_sumpT_highpT", "std::vector<std::vector<float> >", &mc_pu_sumpT_highpT);
   if( doWrite("mc_pu_ntrks_lowpT") ) tree->Branch("mc_pu_ntrks_lowpT", "std::vector<std::vector<int> >", &mc_pu_ntrks_lowpT);
   if( doWrite("mc_pu_ntrks_highpT") ) tree->Branch("mc_pu_ntrks_highpT", "std::vector<std::vector<int> >", &mc_pu_ntrks_highpT);

   if( doWrite("el_n") ) tree->Branch("el_n", &el_n, "el_n/I");
   if( doWrite("el_pt") ) tree->Branch("el_pt", "std::vector<float>", &el_pt);
   if( doWrite("el_eta") ) tree->Branch("el_eta", "std::vector<float>", &el_eta);
   if( doWrite("el_phi") ) tree->Branch("el_phi", "std::vector<float>", &el_phi);
   if( doWrite("el_m") ) tree->Branch("el_m", "std::vector<float>", &el_m);
   if( doWrite("el_E") ) tree->Branch("el_E", "std::vector<float>", &el_E);
   if( doWrite("el_id") ) tree->Branch("el_id", "std::vector<int>", &el_id);
   if( doWrite("el_charge") ) tree->Branch("el_charge", "std::vector<int>", &el_charge);
   
   if( doWrite("el_scleta") ) tree->Branch("el_scleta", "std::vector<float>", &el_scleta);
   if( doWrite("el_passConversionVeto") ) tree->Branch("el_passConversionVeto", "std::vector<int>", &el_passConversionVeto);
   if( doWrite("el_isGsfCtfScPixChargeConsistent") ) tree->Branch("el_isGsfCtfScPixChargeConsistent", "std::vector<int>", &el_isGsfCtfScPixChargeConsistent);
   if( doWrite("el_dB3D") ) tree->Branch("el_dB3D", "std::vector<float>", &el_dB3D);
   if( doWrite("el_edB3D") ) tree->Branch("el_edB3D", "std::vector<float>", &el_edB3D);
   
   if( doWrite("el_neutralHadronIso") ) tree->Branch("el_neutralHadronIso", "std::vector<float>", &el_neutralHadronIso);
   if( doWrite("el_chargedHadronIso") ) tree->Branch("el_chargedHadronIso", "std::vector<float>", &el_chargedHadronIso);
   if( doWrite("el_puChargedHadronIso") ) tree->Branch("el_puChargedHadronIso", "std::vector<float>", &el_puChargedHadronIso);
   if( doWrite("el_ecalIso") ) tree->Branch("el_ecalIso", "std::vector<float>", &el_ecalIso);
   if( doWrite("el_hcalIso") ) tree->Branch("el_hcalIso", "std::vector<float>", &el_hcalIso);
   if( doWrite("el_particleIso") ) tree->Branch("el_particleIso", "std::vector<float>", &el_particleIso);
   if( doWrite("el_photonIso") ) tree->Branch("el_photonIso", "std::vector<float>", &el_photonIso);
   if( doWrite("el_trackIso") ) tree->Branch("el_trackIso", "std::vector<float>", &el_trackIso);

   if( doWrite("el_pfIso_sumChargedHadronPt") ) tree->Branch("el_pfIso_sumChargedHadronPt", "std::vector<float>", &el_pfIso_sumChargedHadronPt);
   if( doWrite("el_pfIso_sumNeutralHadronEt") ) tree->Branch("el_pfIso_sumNeutralHadronEt", "std::vector<float>", &el_pfIso_sumNeutralHadronEt);
   if( doWrite("el_pfIso_sumPhotonEt") ) tree->Branch("el_pfIso_sumPhotonEt", "std::vector<float>", &el_pfIso_sumPhotonEt);
   if( doWrite("el_pfIso_sumPUPt") ) tree->Branch("el_pfIso_sumPUPt", "std::vector<float>", &el_pfIso_sumPUPt);
   
   if( doWrite("el_miniIso") ) tree->Branch("el_miniIso", "std::vector<float>", &el_miniIso);
   
   if( doWrite("el_isLoose") ) tree->Branch("el_isLoose", "std::vector<int>", &el_isLoose);
   if( doWrite("el_isTight") ) tree->Branch("el_isTight", "std::vector<int>", &el_isTight);
   if( doWrite("el_isRobustLoose") ) tree->Branch("el_isRobustLoose", "std::vector<int>", &el_isRobustLoose);
   if( doWrite("el_isRobustTight") ) tree->Branch("el_isRobustTight", "std::vector<int>", &el_isRobustTight);
   if( doWrite("el_isRobustHighEnergy") ) tree->Branch("el_isRobustHighEnergy", "std::vector<int>", &el_isRobustHighEnergy);
   
   if( doWrite("el_vx") ) tree->Branch("el_vx", "std::vector<float>", &el_vx);
   if( doWrite("el_vy") ) tree->Branch("el_vy", "std::vector<float>", &el_vy);
   if( doWrite("el_vz") ) tree->Branch("el_vz", "std::vector<float>", &el_vz);
   
   if( doWrite("el_isGsf") ) tree->Branch("el_isGsf", "std::vector<bool>", &el_isGsf);
   if( doWrite("el_dxy") ) tree->Branch("el_dxy", "std::vector<float>", &el_dxy);
   if( doWrite("el_dz") ) tree->Branch("el_dz", "std::vector<float>", &el_dz);
   if( doWrite("el_dxyError") ) tree->Branch("el_dxyError", "std::vector<float>", &el_dxyError);
   if( doWrite("el_dzError") ) tree->Branch("el_dzError", "std::vector<float>", &el_dzError);
   
   if( doWrite("el_numberOfHits") ) tree->Branch("el_numberOfHits", "std::vector<int>", &el_numberOfHits);
   
   if( doWrite("el_sigmaIetaIeta") ) tree->Branch("el_sigmaIetaIeta", "std::vector<float>", &el_sigmaIetaIeta);
   if( doWrite("el_sigmaIphiIphi") ) tree->Branch("el_sigmaIphiIphi", "std::vector<float>", &el_sigmaIphiIphi);
   if( doWrite("el_hadronicOverEm") ) tree->Branch("el_hadronicOverEm", "std::vector<float>", &el_hadronicOverEm);
   if( doWrite("el_dr03TkSumPt") ) tree->Branch("el_dr03TkSumPt", "std::vector<float>", &el_dr03TkSumPt);
   if( doWrite("el_dr03EcalRecHitSumEt") ) tree->Branch("el_dr03EcalRecHitSumEt", "std::vector<float>", &el_dr03EcalRecHitSumEt);
   if( doWrite("el_dr03HcalTowerSumEt") ) tree->Branch("el_dr03HcalTowerSumEt", "std::vector<float>", &el_dr03HcalTowerSumEt);
   if( doWrite("el_numberOfLostHits") ) tree->Branch("el_numberOfLostHits", "std::vector<int>", &el_numberOfLostHits);

   if( doWrite("el_fbrem") ) tree->Branch("el_fbrem", "std::vector<float>", &el_fbrem);
   if( doWrite("el_kf_normalizedChi2") ) tree->Branch("el_kf_normalizedChi2", "std::vector<float>", &el_kf_normalizedChi2);
   if( doWrite("el_trackerLayersWithMeasurement") ) tree->Branch("el_trackerLayersWithMeasurement", "std::vector<int>", &el_trackerLayersWithMeasurement);
   if( doWrite("el_gsf_normalizedChi2") ) tree->Branch("el_gsf_normalizedChi2", "std::vector<float>", &el_gsf_normalizedChi2);
   if( doWrite("el_deltaEtaSuperClusterTrackAtVtx") ) tree->Branch("el_deltaEtaSuperClusterTrackAtVtx", "std::vector<float>", &el_deltaEtaSuperClusterTrackAtVtx);
   if( doWrite("el_deltaPhiSuperClusterTrackAtVtx") ) tree->Branch("el_deltaPhiSuperClusterTrackAtVtx", "std::vector<float>", &el_deltaPhiSuperClusterTrackAtVtx);
   if( doWrite("el_deltaEtaSeedClusterTrackAtCalo") ) tree->Branch("el_deltaEtaSeedClusterTrackAtCalo", "std::vector<float>", &el_deltaEtaSeedClusterTrackAtCalo);
   if( doWrite("el_see") ) tree->Branch("el_see", "std::vector<float>", &el_see);
   if( doWrite("el_spp") ) tree->Branch("el_spp", "std::vector<float>", &el_spp);
   if( doWrite("el_superClusterEtaWidth") ) tree->Branch("el_superClusterEtaWidth", "std::vector<float>", &el_superClusterEtaWidth);
   if( doWrite("el_superClusterPhiWidth") ) tree->Branch("el_superClusterPhiWidth", "std::vector<float>", &el_superClusterPhiWidth);
   if( doWrite("el_full5x5_OneMinusE1x5E5x5") ) tree->Branch("el_full5x5_OneMinusE1x5E5x5", "std::vector<float>", &el_full5x5_OneMinusE1x5E5x5);
   if( doWrite("el_OneMinusE1x5E5x5") ) tree->Branch("el_OneMinusE1x5E5x5", "std::vector<float>", &el_OneMinusE1x5E5x5);
   if( doWrite("el_full5x5_r9") ) tree->Branch("el_full5x5_r9", "std::vector<float>", &el_full5x5_r9);
   if( doWrite("el_r9") ) tree->Branch("el_r9", "std::vector<float>", &el_r9);
   if( doWrite("el_eSuperClusterOverP") ) tree->Branch("el_eSuperClusterOverP", "std::vector<float>", &el_eSuperClusterOverP);
   if( doWrite("el_IoEmIoP") ) tree->Branch("el_IoEmIoP", "std::vector<float>", &el_IoEmIoP);
   if( doWrite("el_eleEoPout") ) tree->Branch("el_eleEoPout", "std::vector<float>", &el_eleEoPout);
   if( doWrite("el_PreShowerOverRaw") ) tree->Branch("el_PreShowerOverRaw", "std::vector<float>", &el_PreShowerOverRaw);
   
   if( doWrite("el_mvaNonTrigV0") ) tree->Branch("el_mvaNonTrigV0", "std::vector<float>", &el_mvaNonTrigV0);
   
   if( doWrite("el_lepMVA") ) tree->Branch("el_lepMVA", "std::vector<float>", &el_lepMVA);
   
   if( doWrite("el_lepMVA_neuRelIso") ) tree->Branch("el_lepMVA_neuRelIso", "std::vector<float>", &el_lepMVA_neuRelIso);
   if( doWrite("el_lepMVA_chRelIso") ) tree->Branch("el_lepMVA_chRelIso", "std::vector<float>", &el_lepMVA_chRelIso);
   if( doWrite("el_lepMVA_jetDR") ) tree->Branch("el_lepMVA_jetDR", "std::vector<float>", &el_lepMVA_jetDR);
   if( doWrite("el_lepMVA_jetPtRatio") ) tree->Branch("el_lepMVA_jetPtRatio", "std::vector<float>", &el_lepMVA_jetPtRatio);
   if( doWrite("el_lepMVA_jetBTagCSV") ) tree->Branch("el_lepMVA_jetBTagCSV", "std::vector<float>", &el_lepMVA_jetBTagCSV);
   if( doWrite("el_lepMVA_sip3d") ) tree->Branch("el_lepMVA_sip3d", "std::vector<float>", &el_lepMVA_sip3d);
   if( doWrite("el_lepMVA_mvaId") ) tree->Branch("el_lepMVA_mvaId", "std::vector<float>", &el_lepMVA_mvaId);
   if( doWrite("el_lepMVA_innerHits") ) tree->Branch("el_lepMVA_innerHits", "std::vector<float>", &el_lepMVA_innerHits);
   
   if( doWrite("el_hasMCMatch") ) tree->Branch("el_hasMCMatch", "std::vector<int>", &el_hasMCMatch);
   if( doWrite("el_gen_pt") ) tree->Branch("el_gen_pt", "std::vector<float>", &el_gen_pt);
   if( doWrite("el_gen_eta") ) tree->Branch("el_gen_eta", "std::vector<float>", &el_gen_eta);
   if( doWrite("el_gen_phi") ) tree->Branch("el_gen_phi", "std::vector<float>", &el_gen_phi);
   if( doWrite("el_gen_m") ) tree->Branch("el_gen_m", "std::vector<float>", &el_gen_m);
   if( doWrite("el_gen_status") ) tree->Branch("el_gen_status", "std::vector<int>", &el_gen_status);
   if( doWrite("el_gen_id") ) tree->Branch("el_gen_id", "std::vector<int>", &el_gen_id);
   if( doWrite("el_gen_charge") ) tree->Branch("el_gen_charge", "std::vector<int>", &el_gen_charge);
   if( doWrite("el_gen_dr") ) tree->Branch("el_gen_dr", "std::vector<float>", &el_gen_dr);
   
   if( doWrite("el_hasMatchedConversion") ) tree->Branch("el_hasMatchedConversion", "std::vector<bool>", &el_hasMatchedConversion);

   if( doWrite("mu_n") ) tree->Branch("mu_n", &mu_n, "mu_n/I");
   if( doWrite("mu_pt") ) tree->Branch("mu_pt", "std::vector<float>", &mu_pt);
   if( doWrite("mu_eta") ) tree->Branch("mu_eta", "std::vector<float>", &mu_eta);
   if( doWrite("mu_phi") ) tree->Branch("mu_phi", "std::vector<float>", &mu_phi);
   if( doWrite("mu_m") ) tree->Branch("mu_m", "std::vector<float>", &mu_m);
   if( doWrite("mu_E") ) tree->Branch("mu_E", "std::vector<float>", &mu_E);
   if( doWrite("mu_id") ) tree->Branch("mu_id", "std::vector<int>", &mu_id);
   if( doWrite("mu_charge") ) tree->Branch("mu_charge", "std::vector<int>", &mu_charge);
   
   if( doWrite("mu_dB3D") ) tree->Branch("mu_dB3D", "std::vector<float>", &mu_dB3D);
   if( doWrite("mu_edB3D") ) tree->Branch("mu_edB3D", "std::vector<float>", &mu_edB3D);

   if( doWrite("mu_neutralHadronIso") ) tree->Branch("mu_neutralHadronIso", "std::vector<float>", &mu_neutralHadronIso);
   if( doWrite("mu_chargedHadronIso") ) tree->Branch("mu_chargedHadronIso", "std::vector<float>", &mu_chargedHadronIso);
   if( doWrite("mu_puChargedHadronIso") ) tree->Branch("mu_puChargedHadronIso", "std::vector<float>", &mu_puChargedHadronIso);
   if( doWrite("mu_ecalIso") ) tree->Branch("mu_ecalIso", "std::vector<float>", &mu_ecalIso);
   if( doWrite("mu_hcalIso") ) tree->Branch("mu_hcalIso", "std::vector<float>", &mu_hcalIso);
   if( doWrite("mu_photonIso") ) tree->Branch("mu_photonIso", "std::vector<float>", &mu_photonIso);
   if( doWrite("mu_trackIso") ) tree->Branch("mu_trackIso", "std::vector<float>", &mu_trackIso);
   
   if( doWrite("mu_pfIso03_sumChargedHadronPt") ) tree->Branch("mu_pfIso03_sumChargedHadronPt", "std::vector<float>", &mu_pfIso03_sumChargedHadronPt);
   if( doWrite("mu_pfIso03_sumNeutralHadronEt") ) tree->Branch("mu_pfIso03_sumNeutralHadronEt", "std::vector<float>", &mu_pfIso03_sumNeutralHadronEt);
   if( doWrite("mu_pfIso03_sumPhotonEt") ) tree->Branch("mu_pfIso03_sumPhotonEt", "std::vector<float>", &mu_pfIso03_sumPhotonEt);
   if( doWrite("mu_pfIso03_sumPUPt") ) tree->Branch("mu_pfIso03_sumPUPt", "std::vector<float>", &mu_pfIso03_sumPUPt);

   if( doWrite("mu_miniIso") ) tree->Branch("mu_miniIso", "std::vector<float>", &mu_miniIso);
   
   if( doWrite("mu_isGlobalMuon") ) tree->Branch("mu_isGlobalMuon", "std::vector<int>", &mu_isGlobalMuon);
   if( doWrite("mu_isTrackerMuon") ) tree->Branch("mu_isTrackerMuon", "std::vector<int>", &mu_isTrackerMuon);
   if( doWrite("mu_isStandAloneMuon") ) tree->Branch("mu_isStandAloneMuon", "std::vector<int>", &mu_isStandAloneMuon);
   if( doWrite("mu_isCaloMuon") ) tree->Branch("mu_isCaloMuon", "std::vector<int>", &mu_isCaloMuon);
   if( doWrite("mu_isPFMuon") ) tree->Branch("mu_isPFMuon", "std::vector<int>", &mu_isPFMuon);
   
   if( doWrite("mu_vx") ) tree->Branch("mu_vx", "std::vector<float>", &mu_vx);
   if( doWrite("mu_vy") ) tree->Branch("mu_vy", "std::vector<float>", &mu_vy);
   if( doWrite("mu_vz") ) tree->Branch("mu_vz", "std::vector<float>", &mu_vz);
   
   if( doWrite("mu_isTightMuon") ) tree->Branch("mu_isTightMuon", "std::vector<bool>", &mu_isTightMuon);
   
   if( doWrite("mu_hasGlobalTrack") ) tree->Branch("mu_hasGlobalTrack", "std::vector<int>", &mu_hasGlobalTrack);
   if( doWrite("mu_globalTrack_dxy") ) tree->Branch("mu_globalTrack_dxy", "std::vector<float>", &mu_globalTrack_dxy);
   if( doWrite("mu_globalTrack_dz") ) tree->Branch("mu_globalTrack_dz", "std::vector<float>", &mu_globalTrack_dz);
   if( doWrite("mu_globalTrack_dxyError") ) tree->Branch("mu_globalTrack_dxyError", "std::vector<float>", &mu_globalTrack_dxyError);
   if( doWrite("mu_globalTrack_dzError") ) tree->Branch("mu_globalTrack_dzError", "std::vector<float>", &mu_globalTrack_dzError);

   if( doWrite("mu_hasInnerTrack") ) tree->Branch("mu_hasInnerTrack", "std::vector<int>", &mu_hasInnerTrack);
   if( doWrite("mu_innerTrack_dxy") ) tree->Branch("mu_innerTrack_dxy", "std::vector<float>", &mu_innerTrack_dxy);
   if( doWrite("mu_innerTrack_dz") ) tree->Branch("mu_innerTrack_dz", "std::vector<float>", &mu_innerTrack_dz);
   if( doWrite("mu_innerTrack_dxyError") ) tree->Branch("mu_innerTrack_dxyError", "std::vector<float>", &mu_innerTrack_dxyError);
   if( doWrite("mu_innerTrack_dzError") ) tree->Branch("mu_innerTrack_dzError", "std::vector<float>", &mu_innerTrack_dzError);

   if( doWrite("mu_bestTrack_dxy") ) tree->Branch("mu_bestTrack_dxy", "std::vector<float>", &mu_bestTrack_dxy);
   if( doWrite("mu_bestTrack_dz") ) tree->Branch("mu_bestTrack_dz", "std::vector<float>", &mu_bestTrack_dz);
   if( doWrite("mu_bestTrack_dxyError") ) tree->Branch("mu_bestTrack_dxyError", "std::vector<float>", &mu_bestTrack_dxyError);
   if( doWrite("mu_bestTrack_dzError") ) tree->Branch("mu_bestTrack_dzError", "std::vector<float>", &mu_bestTrack_dzError);
   
   if( doWrite("mu_innerTrack_pt") ) tree->Branch("mu_innerTrack_pt", "std::vector<float>", &mu_innerTrack_pt);
   if( doWrite("mu_innerTrack_ptError") ) tree->Branch("mu_innerTrack_ptError", "std::vector<float>", &mu_innerTrack_ptError);
   
   if( doWrite("mu_numberOfMatches") ) tree->Branch("mu_numberOfMatches", "std::vector<int>", &mu_numberOfMatches);
   if( doWrite("mu_numberOfValidMuonHits") ) tree->Branch("mu_numberOfValidMuonHits", "std::vector<int>", &mu_numberOfValidMuonHits);

   if( doWrite("mu_lepMVA") ) tree->Branch("mu_lepMVA", "std::vector<float>", &mu_lepMVA);

   if( doWrite("mu_lepMVA_neuRelIso") ) tree->Branch("mu_lepMVA_neuRelIso", "std::vector<float>", &mu_lepMVA_neuRelIso);
   if( doWrite("mu_lepMVA_chRelIso") ) tree->Branch("mu_lepMVA_chRelIso", "std::vector<float>", &mu_lepMVA_chRelIso);
   if( doWrite("mu_lepMVA_jetDR") ) tree->Branch("mu_lepMVA_jetDR", "std::vector<float>", &mu_lepMVA_jetDR);
   if( doWrite("mu_lepMVA_jetPtRatio") ) tree->Branch("mu_lepMVA_jetPtRatio", "std::vector<float>", &mu_lepMVA_jetPtRatio);
   if( doWrite("mu_lepMVA_jetBTagCSV") ) tree->Branch("mu_lepMVA_jetBTagCSV", "std::vector<float>", &mu_lepMVA_jetBTagCSV);
   if( doWrite("mu_lepMVA_sip3d") ) tree->Branch("mu_lepMVA_sip3d", "std::vector<float>", &mu_lepMVA_sip3d);
   if( doWrite("mu_lepMVA_dxy") ) tree->Branch("mu_lepMVA_dxy", "std::vector<float>", &mu_lepMVA_dxy);
   if( doWrite("mu_lepMVA_dz") ) tree->Branch("mu_lepMVA_dz", "std::vector<float>", &mu_lepMVA_dz);
   
   if( doWrite("mu_hasMCMatch") ) tree->Branch("mu_hasMCMatch", "std::vector<int>", &mu_hasMCMatch);
   if( doWrite("mu_gen_pt") ) tree->Branch("mu_gen_pt", "std::vector<float>", &mu_gen_pt);
   if( doWrite("mu_gen_eta") ) tree->Branch("mu_gen_eta", "std::vector<float>", &mu_gen_eta);
   if( doWrite("mu_gen_phi") ) tree->Branch("mu_gen_phi", "std::vector<float>", &mu_gen_phi);
   if( doWrite("mu_gen_m") ) tree->Branch("mu_gen_m", "std::vector<float>", &mu_gen_m);
   if( doWrite("mu_gen_status") ) tree->Branch("mu_gen_status", "std::vector<int>", &mu_gen_status);
   if( doWrite("mu_gen_id") ) tree->Branch("mu_gen_id", "std::vector<int>", &mu_gen_id);
   if( doWrite("mu_gen_charge") ) tree->Branch("mu_gen_charge", "std::vector<int>", &mu_gen_charge);
   if( doWrite("mu_gen_dr") ) tree->Branch("mu_gen_dr", "std::vector<float>", &mu_gen_dr);
   
   if( doWrite("jet_n") ) tree->Branch("jet_n", &jet_n, "jet_n/I");
   if( doWrite("jet_pt") ) tree->Branch("jet_pt", "std::vector<float>", &jet_pt);
   if( doWrite("jet_eta") ) tree->Branch("jet_eta", "std::vector<float>", &jet_eta);
   if( doWrite("jet_phi") ) tree->Branch("jet_phi", "std::vector<float>", &jet_phi);
   if( doWrite("jet_m") ) tree->Branch("jet_m", "std::vector<float>", &jet_m);
   if( doWrite("jet_E") ) tree->Branch("jet_E", "std::vector<float>", &jet_E);
   
   if( doWrite("jet_ntrk") ) tree->Branch("jet_ntrk", "std::vector<int>", &jet_ntrk);

   if( doWrite("jet_JBP") ) tree->Branch("jet_JBP", "std::vector<float>", &jet_JBP);
   if( doWrite("jet_JP") ) tree->Branch("jet_JP", "std::vector<float>", &jet_JP);
   if( doWrite("jet_TCHP") ) tree->Branch("jet_TCHP", "std::vector<float>", &jet_TCHP);
   if( doWrite("jet_TCHE") ) tree->Branch("jet_TCHE", "std::vector<float>", &jet_TCHE);
   if( doWrite("jet_SSVHE") ) tree->Branch("jet_SSVHE", "std::vector<float>", &jet_SSVHE);
   if( doWrite("jet_SSVHP") ) tree->Branch("jet_SSVHP", "std::vector<float>", &jet_SSVHP);
   if( doWrite("jet_CMVA") ) tree->Branch("jet_CMVA", "std::vector<float>", &jet_CMVA);
   if( doWrite("jet_CSV") ) tree->Branch("jet_CSV", "std::vector<float>", &jet_CSV);
   if( doWrite("jet_CSVv2") ) tree->Branch("jet_CSVv2", "std::vector<float>", &jet_CSVv2);
   if( doWrite("jet_flavour") ) tree->Branch("jet_flavour", "std::vector<int>", &jet_flavour);

   if( doWrite("jet_neutralHadronEnergy") ) tree->Branch("jet_neutralHadronEnergy", "std::vector<float>", &jet_neutralHadronEnergy);
   if( doWrite("jet_neutralEmEnergy") ) tree->Branch("jet_neutralEmEnergy", "std::vector<float>", &jet_neutralEmEnergy);
   if( doWrite("jet_chargedHadronEnergy") ) tree->Branch("jet_chargedHadronEnergy", "std::vector<float>", &jet_chargedHadronEnergy);
   if( doWrite("jet_chargedEmEnergy") ) tree->Branch("jet_chargedEmEnergy", "std::vector<float>", &jet_chargedEmEnergy);
   if( doWrite("jet_electronEnergy") ) tree->Branch("jet_electronEnergy", "std::vector<float>", &jet_electronEnergy);
   if( doWrite("jet_muonEnergy") ) tree->Branch("jet_muonEnergy", "std::vector<float>", &jet_muonEnergy);
   if( doWrite("jet_photonEnergy") ) tree->Branch("jet_photonEnergy", "std::vector<float>", &jet_photonEnergy);
   
   if( doWrite("jet_pileupJetId") ) tree->Branch("jet_pileupJetId", "std::vector<float>", &jet_pileupJetId);

   if( doWrite("jet_gen_pt") ) tree->Branch("jet_gen_pt", "std::vector<float>", &jet_gen_pt);
   if( doWrite("jet_gen_eta") ) tree->Branch("jet_gen_eta", "std::vector<float>", &jet_gen_eta);
   if( doWrite("jet_gen_phi") ) tree->Branch("jet_gen_phi", "std::vector<float>", &jet_gen_phi);
   if( doWrite("jet_gen_m") ) tree->Branch("jet_gen_m", "std::vector<float>", &jet_gen_m);
   if( doWrite("jet_gen_E") ) tree->Branch("jet_gen_E", "std::vector<float>", &jet_gen_E);
   
   if( doWrite("jet_gen_status") ) tree->Branch("jet_gen_status", "std::vector<int>", &jet_gen_status);
   if( doWrite("jet_gen_id") ) tree->Branch("jet_gen_id", "std::vector<int>", &jet_gen_id);
   
   if( doWrite("mc_truth_tth") )
     {
	tree->Branch("mc_truth_tth_channel", &mc_truth_tth_channel, "mc_truth_tth_channel/I");

	tree->Branch("mc_truth_tth_h0_p4", "TLorentzVector", &mc_truth_tth_h0_p4);
	
	tree->Branch("mc_truth_tth_h0W1_p4", "TLorentzVector", &mc_truth_tth_h0W1_p4);
	tree->Branch("mc_truth_tth_h0W2_p4", "TLorentzVector", &mc_truth_tth_h0W2_p4);
	tree->Branch("mc_truth_tth_h0Wl1_p4", "TLorentzVector", &mc_truth_tth_h0Wl1_p4);
	tree->Branch("mc_truth_tth_h0Wnu1_p4", "TLorentzVector", &mc_truth_tth_h0Wnu1_p4);
	tree->Branch("mc_truth_tth_h0Wtau1_p4", "TLorentzVector", &mc_truth_tth_h0Wtau1_p4);
	tree->Branch("mc_truth_tth_h0Wnutau1_p4", "TLorentzVector", &mc_truth_tth_h0Wnutau1_p4);
	tree->Branch("mc_truth_tth_h0Wtaul1_p4", "TLorentzVector", &mc_truth_tth_h0Wtaul1_p4);
	tree->Branch("mc_truth_tth_h0Wtaunu1_p4", "TLorentzVector", &mc_truth_tth_h0Wtaunu1_p4);
	tree->Branch("mc_truth_tth_h0Wtaunutau1_p4", "TLorentzVector", &mc_truth_tth_h0Wtaunutau1_p4);
	tree->Branch("mc_truth_tth_h0Wl2_p4", "TLorentzVector", &mc_truth_tth_h0Wl2_p4);
	tree->Branch("mc_truth_tth_h0Wnu2_p4", "TLorentzVector", &mc_truth_tth_h0Wnu2_p4);
	tree->Branch("mc_truth_tth_h0Wtau2_p4", "TLorentzVector", &mc_truth_tth_h0Wtau2_p4);
	tree->Branch("mc_truth_tth_h0Wnutau2_p4", "TLorentzVector", &mc_truth_tth_h0Wnutau2_p4);
	tree->Branch("mc_truth_tth_h0Wtaul2_p4", "TLorentzVector", &mc_truth_tth_h0Wtaul2_p4);
	tree->Branch("mc_truth_tth_h0Wtaunu2_p4", "TLorentzVector", &mc_truth_tth_h0Wtaunu2_p4);
	tree->Branch("mc_truth_tth_h0Wtaunutau2_p4", "TLorentzVector", &mc_truth_tth_h0Wtaunutau2_p4);
	tree->Branch("mc_truth_tth_h0Wq11_p4", "TLorentzVector", &mc_truth_tth_h0Wq11_p4);
	tree->Branch("mc_truth_tth_h0Wq21_p4", "TLorentzVector", &mc_truth_tth_h0Wq21_p4);
	tree->Branch("mc_truth_tth_h0Wq12_p4", "TLorentzVector", &mc_truth_tth_h0Wq12_p4);
	tree->Branch("mc_truth_tth_h0Wq22_p4", "TLorentzVector", &mc_truth_tth_h0Wq22_p4);
	
	tree->Branch("mc_truth_tth_h0Z1_p4", "TLorentzVector", &mc_truth_tth_h0Z1_p4);
	tree->Branch("mc_truth_tth_h0Z2_p4", "TLorentzVector", &mc_truth_tth_h0Z2_p4);
	tree->Branch("mc_truth_tth_h0Zl11_p4", "TLorentzVector", &mc_truth_tth_h0Zl11_p4);
	tree->Branch("mc_truth_tth_h0Zl21_p4", "TLorentzVector", &mc_truth_tth_h0Zl21_p4);
	tree->Branch("mc_truth_tth_h0Zl12_p4", "TLorentzVector", &mc_truth_tth_h0Zl12_p4);
	tree->Branch("mc_truth_tth_h0Zl22_p4", "TLorentzVector", &mc_truth_tth_h0Zl22_p4);
	tree->Branch("mc_truth_tth_h0Ztau11_p4", "TLorentzVector", &mc_truth_tth_h0Ztau11_p4);
	tree->Branch("mc_truth_tth_h0Ztau21_p4", "TLorentzVector", &mc_truth_tth_h0Ztau21_p4);
	tree->Branch("mc_truth_tth_h0Ztaul11_p4", "TLorentzVector", &mc_truth_tth_h0Ztaul11_p4);
	tree->Branch("mc_truth_tth_h0Ztaul21_p4", "TLorentzVector", &mc_truth_tth_h0Ztaul21_p4);
	tree->Branch("mc_truth_tth_h0Ztaunu11_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunu11_p4);
	tree->Branch("mc_truth_tth_h0Ztaunu21_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunu21_p4);
	tree->Branch("mc_truth_tth_h0Ztaunutau11_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunutau11_p4);
	tree->Branch("mc_truth_tth_h0Ztaunutau21_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunutau21_p4);
	tree->Branch("mc_truth_tth_h0Zq11_p4", "TLorentzVector", &mc_truth_tth_h0Zq11_p4);
	tree->Branch("mc_truth_tth_h0Zq21_p4", "TLorentzVector", &mc_truth_tth_h0Zq21_p4);
	tree->Branch("mc_truth_tth_h0Zq12_p4", "TLorentzVector", &mc_truth_tth_h0Zq12_p4);
	tree->Branch("mc_truth_tth_h0Zq22_p4", "TLorentzVector", &mc_truth_tth_h0Zq22_p4);
	tree->Branch("mc_truth_tth_h0Ztau12_p4", "TLorentzVector", &mc_truth_tth_h0Ztau12_p4);
	tree->Branch("mc_truth_tth_h0Ztau22_p4", "TLorentzVector", &mc_truth_tth_h0Ztau22_p4);
	tree->Branch("mc_truth_tth_h0Ztaul12_p4", "TLorentzVector", &mc_truth_tth_h0Ztaul12_p4);
	tree->Branch("mc_truth_tth_h0Ztaul22_p4", "TLorentzVector", &mc_truth_tth_h0Ztaul22_p4);
	tree->Branch("mc_truth_tth_h0Ztaunu12_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunu12_p4);
	tree->Branch("mc_truth_tth_h0Ztaunu22_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunu22_p4);
	tree->Branch("mc_truth_tth_h0Ztaunutau12_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunutau12_p4);
	tree->Branch("mc_truth_tth_h0Ztaunutau22_p4", "TLorentzVector", &mc_truth_tth_h0Ztaunutau22_p4);
	tree->Branch("mc_truth_tth_h0Zq12_p4", "TLorentzVector", &mc_truth_tth_h0Zq12_p4);
	tree->Branch("mc_truth_tth_h0Zq22_p4", "TLorentzVector", &mc_truth_tth_h0Zq22_p4);
	tree->Branch("mc_truth_tth_h0Znu11_p4", "TLorentzVector", &mc_truth_tth_h0Znu11_p4);
	tree->Branch("mc_truth_tth_h0Znu21_p4", "TLorentzVector", &mc_truth_tth_h0Znu21_p4);
	tree->Branch("mc_truth_tth_h0Znu12_p4", "TLorentzVector", &mc_truth_tth_h0Znu12_p4);
	tree->Branch("mc_truth_tth_h0Znu22_p4", "TLorentzVector", &mc_truth_tth_h0Znu22_p4);
	
	tree->Branch("mc_truth_tth_h0tau1_p4", "TLorentzVector", &mc_truth_tth_h0tau1_p4);
	tree->Branch("mc_truth_tth_h0tau2_p4", "TLorentzVector", &mc_truth_tth_h0tau2_p4);
	tree->Branch("mc_truth_tth_h0taul1_p4", "TLorentzVector", &mc_truth_tth_h0taul1_p4);
	tree->Branch("mc_truth_tth_h0taunutau1_p4", "TLorentzVector", &mc_truth_tth_h0taunutau1_p4);
	tree->Branch("mc_truth_tth_h0taunu1_p4", "TLorentzVector", &mc_truth_tth_h0taunu1_p4);
	tree->Branch("mc_truth_tth_h0taul2_p4", "TLorentzVector", &mc_truth_tth_h0taul2_p4);
	tree->Branch("mc_truth_tth_h0taunutau2_p4", "TLorentzVector", &mc_truth_tth_h0taunutau2_p4);
	tree->Branch("mc_truth_tth_h0taunu2_p4", "TLorentzVector", &mc_truth_tth_h0taunu2_p4);
	
	tree->Branch("mc_truth_tth_t1_p4", "TLorentzVector", &mc_truth_tth_t1_p4);
	tree->Branch("mc_truth_tth_t2_p4", "TLorentzVector", &mc_truth_tth_t2_p4);
	tree->Branch("mc_truth_tth_tb1_p4", "TLorentzVector", &mc_truth_tth_tb1_p4);
	tree->Branch("mc_truth_tth_tb2_p4", "TLorentzVector", &mc_truth_tth_tb2_p4);
	
	tree->Branch("mc_truth_tth_tW1_p4", "TLorentzVector", &mc_truth_tth_tW1_p4);
	tree->Branch("mc_truth_tth_tWnu1_p4", "TLorentzVector", &mc_truth_tth_tWnu1_p4);
	tree->Branch("mc_truth_tth_tWnutau1_p4", "TLorentzVector", &mc_truth_tth_tWnutau1_p4);
	tree->Branch("mc_truth_tth_tWl1_p4", "TLorentzVector", &mc_truth_tth_tWl1_p4);
	tree->Branch("mc_truth_tth_tWtau1_p4", "TLorentzVector", &mc_truth_tth_tWtau1_p4);
	tree->Branch("mc_truth_tth_tWtaunu1_p4", "TLorentzVector", &mc_truth_tth_tWtaunu1_p4);
	tree->Branch("mc_truth_tth_tWtaunutau1_p4", "TLorentzVector", &mc_truth_tth_tWtaunutau1_p4);
	tree->Branch("mc_truth_tth_tWtaul1_p4", "TLorentzVector", &mc_truth_tth_tWtaul1_p4);
	tree->Branch("mc_truth_tth_tWq11_p4", "TLorentzVector", &mc_truth_tth_tWq11_p4);
	tree->Branch("mc_truth_tth_tWq21_p4", "TLorentzVector", &mc_truth_tth_tWq21_p4);
	
	tree->Branch("mc_truth_tth_tW2_p4", "TLorentzVector", &mc_truth_tth_tW2_p4);
	tree->Branch("mc_truth_tth_tWnu2_p4", "TLorentzVector", &mc_truth_tth_tWnu2_p4);
	tree->Branch("mc_truth_tth_tWnutau2_p4", "TLorentzVector", &mc_truth_tth_tWnutau2_p4);
	tree->Branch("mc_truth_tth_tWl2_p4", "TLorentzVector", &mc_truth_tth_tWl2_p4);
	tree->Branch("mc_truth_tth_tWtau2_p4", "TLorentzVector", &mc_truth_tth_tWtau2_p4);
	tree->Branch("mc_truth_tth_tWtaunu2_p4", "TLorentzVector", &mc_truth_tth_tWtaunu2_p4);
	tree->Branch("mc_truth_tth_tWtaunutau2_p4", "TLorentzVector", &mc_truth_tth_tWtaunutau2_p4);
	tree->Branch("mc_truth_tth_tWtaul2_p4", "TLorentzVector", &mc_truth_tth_tWtaul2_p4);
	tree->Branch("mc_truth_tth_tWq12_p4", "TLorentzVector", &mc_truth_tth_tWq12_p4);
	tree->Branch("mc_truth_tth_tWq22_p4", "TLorentzVector", &mc_truth_tth_tWq22_p4);
	
	tree->Branch("mc_truth_tth_j1_p4", "TLorentzVector", &mc_truth_tth_j1_p4);
	tree->Branch("mc_truth_tth_j2_p4", "TLorentzVector", &mc_truth_tth_j2_p4);
	tree->Branch("mc_truth_tth_j3_p4", "TLorentzVector", &mc_truth_tth_j3_p4);
	
	tree->Branch("mc_truth_tth_h0_id", &mc_truth_tth_h0_id, "mc_truth_tth_h0_id/I");
	
	tree->Branch("mc_truth_tth_h0W1_id", &mc_truth_tth_h0W1_id, "mc_truth_tth_h0W1_id/I");
	tree->Branch("mc_truth_tth_h0W2_id", &mc_truth_tth_h0W2_id, "mc_truth_tth_h0W2_id/I");
	tree->Branch("mc_truth_tth_h0Wl1_id", &mc_truth_tth_h0Wl1_id, "mc_truth_tth_h0Wl1_id/I");
	tree->Branch("mc_truth_tth_h0Wnu1_id", &mc_truth_tth_h0Wnu1_id, "mc_truth_tth_h0Wnu1_id/I");
	tree->Branch("mc_truth_tth_h0Wtau1_id", &mc_truth_tth_h0Wtau1_id, "mc_truth_tth_h0Wtau1_id/I");
	tree->Branch("mc_truth_tth_h0Wnutau1_id", &mc_truth_tth_h0Wnutau1_id, "mc_truth_tth_h0Wnutau1_id/I");
	tree->Branch("mc_truth_tth_h0Wtaul1_id", &mc_truth_tth_h0Wtaul1_id, "mc_truth_tth_h0Wtaul1_id/I");
	tree->Branch("mc_truth_tth_h0Wtaunu1_id", &mc_truth_tth_h0Wtaunu1_id, "mc_truth_tth_h0Wtaunu1_id/I");
	tree->Branch("mc_truth_tth_h0Wtaunutau1_id", &mc_truth_tth_h0Wtaunutau1_id, "mc_truth_tth_h0Wtaunutau1_id/I");
	tree->Branch("mc_truth_tth_h0Wl2_id", &mc_truth_tth_h0Wl2_id, "mc_truth_tth_h0Wl2_id/I");
	tree->Branch("mc_truth_tth_h0Wnu2_id", &mc_truth_tth_h0Wnu2_id, "mc_truth_tth_h0Wnu2_id/I");
	tree->Branch("mc_truth_tth_h0Wtau2_id", &mc_truth_tth_h0Wtau2_id, "mc_truth_tth_h0Wtau2_id/I");
	tree->Branch("mc_truth_tth_h0Wnutau2_id", &mc_truth_tth_h0Wnutau2_id, "mc_truth_tth_h0Wnutau2_id/I");
	tree->Branch("mc_truth_tth_h0Wtaul2_id", &mc_truth_tth_h0Wtaul2_id, "mc_truth_tth_h0Wtaul2_id/I");
	tree->Branch("mc_truth_tth_h0Wtaunu2_id", &mc_truth_tth_h0Wtaunu2_id, "mc_truth_tth_h0Wtaunu2_id/I");
	tree->Branch("mc_truth_tth_h0Wtaunutau2_id", &mc_truth_tth_h0Wtaunutau2_id, "mc_truth_tth_h0Wtaunutau2_id/I");
	tree->Branch("mc_truth_tth_h0Wq11_id", &mc_truth_tth_h0Wq11_id, "mc_truth_tth_h0Wq11_id/I");
	tree->Branch("mc_truth_tth_h0Wq21_id", &mc_truth_tth_h0Wq21_id, "mc_truth_tth_h0Wq21_id/I");
	tree->Branch("mc_truth_tth_h0Wq12_id", &mc_truth_tth_h0Wq12_id, "mc_truth_tth_h0Wq12_id/I");
	tree->Branch("mc_truth_tth_h0Wq22_id", &mc_truth_tth_h0Wq22_id, "mc_truth_tth_h0Wq22_id/I");
	
	tree->Branch("mc_truth_tth_h0Z1_id", &mc_truth_tth_h0Z1_id, "mc_truth_tth_h0Z1_id/I");
	tree->Branch("mc_truth_tth_h0Z2_id", &mc_truth_tth_h0Z2_id, "mc_truth_tth_h0Z2_id/I");
	tree->Branch("mc_truth_tth_h0Zl11_id", &mc_truth_tth_h0Zl11_id, "mc_truth_tth_h0Zl11_id/I");
	tree->Branch("mc_truth_tth_h0Zl21_id", &mc_truth_tth_h0Zl21_id, "mc_truth_tth_h0Zl21_id/I");
	tree->Branch("mc_truth_tth_h0Ztau11_id", &mc_truth_tth_h0Ztau11_id, "mc_truth_tth_h0Ztau11_id/I");
	tree->Branch("mc_truth_tth_h0Ztau21_id", &mc_truth_tth_h0Ztau21_id, "mc_truth_tth_h0Ztau21_id/I");
	tree->Branch("mc_truth_tth_h0Ztaul11_id", &mc_truth_tth_h0Ztaul11_id, "mc_truth_tth_h0Ztaul11_id/I");
	tree->Branch("mc_truth_tth_h0Ztaul21_id", &mc_truth_tth_h0Ztaul21_id, "mc_truth_tth_h0Ztaul21_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunu11_id", &mc_truth_tth_h0Ztaunu11_id, "mc_truth_tth_h0Ztaunu11_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunu21_id", &mc_truth_tth_h0Ztaunu21_id, "mc_truth_tth_h0Ztaunu21_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau11_id", &mc_truth_tth_h0Ztaunutau11_id, "mc_truth_tth_h0Ztaunutau11_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau21_id", &mc_truth_tth_h0Ztaunutau21_id, "mc_truth_tth_h0Ztaunutau21_id/I");
	tree->Branch("mc_truth_tth_h0Zq11_id", &mc_truth_tth_h0Zq11_id, "mc_truth_tth_h0Zq11_id/I");
	tree->Branch("mc_truth_tth_h0Zq21_id", &mc_truth_tth_h0Zq21_id, "mc_truth_tth_h0Zq21_id/I");
	tree->Branch("mc_truth_tth_h0Zl12_id", &mc_truth_tth_h0Zl12_id, "mc_truth_tth_h0Zl12_id/I");
	tree->Branch("mc_truth_tth_h0Zl22_id", &mc_truth_tth_h0Zl22_id, "mc_truth_tth_h0Zl22_id/I");
	tree->Branch("mc_truth_tth_h0Ztau12_id", &mc_truth_tth_h0Ztau12_id, "mc_truth_tth_h0Ztau12_id/I");
	tree->Branch("mc_truth_tth_h0Ztau22_id", &mc_truth_tth_h0Ztau22_id, "mc_truth_tth_h0Ztau22_id/I");
	tree->Branch("mc_truth_tth_h0Ztaul12_id", &mc_truth_tth_h0Ztaul12_id, "mc_truth_tth_h0Ztaul12_id/I");
	tree->Branch("mc_truth_tth_h0Ztaul22_id", &mc_truth_tth_h0Ztaul22_id, "mc_truth_tth_h0Ztaul22_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunu12_id", &mc_truth_tth_h0Ztaunu12_id, "mc_truth_tth_h0Ztaunu12_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunu22_id", &mc_truth_tth_h0Ztaunu22_id, "mc_truth_tth_h0Ztaunu22_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau12_id", &mc_truth_tth_h0Ztaunutau12_id, "mc_truth_tth_h0Ztaunutau12_id/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau22_id", &mc_truth_tth_h0Ztaunutau22_id, "mc_truth_tth_h0Ztaunutau22_id/I");
	tree->Branch("mc_truth_tth_h0Zq12_id", &mc_truth_tth_h0Zq12_id, "mc_truth_tth_h0Zq12_id/I");
	tree->Branch("mc_truth_tth_h0Zq22_id", &mc_truth_tth_h0Zq22_id, "mc_truth_tth_h0Zq22_id/I");
	tree->Branch("mc_truth_tth_h0Znu11_id", &mc_truth_tth_h0Znu11_id, "mc_truth_tth_h0Znu11_id/I");
	tree->Branch("mc_truth_tth_h0Znu21_id", &mc_truth_tth_h0Znu21_id, "mc_truth_tth_h0Znu21_id/I");
	tree->Branch("mc_truth_tth_h0Znu12_id", &mc_truth_tth_h0Znu12_id, "mc_truth_tth_h0Znu12_id/I");
	tree->Branch("mc_truth_tth_h0Znu22_id", &mc_truth_tth_h0Znu22_id, "mc_truth_tth_h0Znu22_id/I");
	
	tree->Branch("mc_truth_tth_h0tau1_id", &mc_truth_tth_h0tau1_id, "mc_truth_tth_h0tau1_id/I");
	tree->Branch("mc_truth_tth_h0tau2_id", &mc_truth_tth_h0tau2_id, "mc_truth_tth_h0tau2_id/I");
	tree->Branch("mc_truth_tth_h0taul1_id", &mc_truth_tth_h0taul1_id, "mc_truth_tth_h0taul1_id/I");
	tree->Branch("mc_truth_tth_h0taunutau1_id", &mc_truth_tth_h0taunutau1_id, "mc_truth_tth_h0taunutau1_id/I");
	tree->Branch("mc_truth_tth_h0taunu1_id", &mc_truth_tth_h0taunu1_id, "mc_truth_tth_h0taunu1_id/I");
	tree->Branch("mc_truth_tth_h0taul2_id", &mc_truth_tth_h0taul2_id, "mc_truth_tth_h0taul2_id/I");
	tree->Branch("mc_truth_tth_h0taunutau2_id", &mc_truth_tth_h0taunutau2_id, "mc_truth_tth_h0taunutau2_id/I");
	tree->Branch("mc_truth_tth_h0taunu2_id", &mc_truth_tth_h0taunu2_id, "mc_truth_tth_h0taunu2_id/I");
	
	tree->Branch("mc_truth_tth_t1_id", &mc_truth_tth_t1_id, "mc_truth_tth_t1_id/I");
	tree->Branch("mc_truth_tth_t2_id", &mc_truth_tth_t2_id, "mc_truth_tth_t2_id/I");
	tree->Branch("mc_truth_tth_tb1_id", &mc_truth_tth_tb1_id, "mc_truth_tth_tb1_id/I");
	tree->Branch("mc_truth_tth_tb2_id", &mc_truth_tth_tb2_id, "mc_truth_tth_tb2_id/I");
	
	tree->Branch("mc_truth_tth_tW1_id", &mc_truth_tth_tW1_id, "mc_truth_tth_tW1_id/I");
	tree->Branch("mc_truth_tth_tWnu1_id", &mc_truth_tth_tWnu1_id, "mc_truth_tth_tWnu1_id/I");
	tree->Branch("mc_truth_tth_tWnutau1_id", &mc_truth_tth_tWnutau1_id, "mc_truth_tth_tWnutau1_id/I");
	tree->Branch("mc_truth_tth_tWl1_id", &mc_truth_tth_tWl1_id, "mc_truth_tth_tWl1_id/I");
	tree->Branch("mc_truth_tth_tWtau1_id", &mc_truth_tth_tWtau1_id, "mc_truth_tth_tWtau1_id/I");
	tree->Branch("mc_truth_tth_tWtaunu1_id", &mc_truth_tth_tWtaunu1_id, "mc_truth_tth_tWtaunu1_id/I");
	tree->Branch("mc_truth_tth_tWtaunutau1_id", &mc_truth_tth_tWtaunutau1_id, "mc_truth_tth_tWtaunutau1_id/I");
	tree->Branch("mc_truth_tth_tWtaul1_id", &mc_truth_tth_tWtaul1_id, "mc_truth_tth_tWtaul1_id/I");
	tree->Branch("mc_truth_tth_tWq11_id", &mc_truth_tth_tWq11_id, "mc_truth_tth_tWq11_id/I");
	tree->Branch("mc_truth_tth_tWq21_id", &mc_truth_tth_tWq21_id, "mc_truth_tth_tWq21_id/I");

	tree->Branch("mc_truth_tth_tW2_id", &mc_truth_tth_tW2_id, "mc_truth_tth_tW2_id/I");
	tree->Branch("mc_truth_tth_tWnu2_id", &mc_truth_tth_tWnu2_id, "mc_truth_tth_tWnu2_id/I");
	tree->Branch("mc_truth_tth_tWnutau2_id", &mc_truth_tth_tWnutau2_id, "mc_truth_tth_tWnutau2_id/I");
	tree->Branch("mc_truth_tth_tWl2_id", &mc_truth_tth_tWl2_id, "mc_truth_tth_tWl2_id/I");
	tree->Branch("mc_truth_tth_tWtau2_id", &mc_truth_tth_tWtau2_id, "mc_truth_tth_tWtau2_id/I");
	tree->Branch("mc_truth_tth_tWtaunu2_id", &mc_truth_tth_tWtaunu2_id, "mc_truth_tth_tWtaunu2_id/I");
	tree->Branch("mc_truth_tth_tWtaunutau2_id", &mc_truth_tth_tWtaunutau2_id, "mc_truth_tth_tWtaunutau2_id/I");
	tree->Branch("mc_truth_tth_tWtaul2_id", &mc_truth_tth_tWtaul2_id, "mc_truth_tth_tWtaul2_id/I");
	tree->Branch("mc_truth_tth_tWq12_id", &mc_truth_tth_tWq12_id, "mc_truth_tth_tWq12_id/I");
	tree->Branch("mc_truth_tth_tWq22_id", &mc_truth_tth_tWq22_id, "mc_truth_tth_tWq22_id/I");
	
	tree->Branch("mc_truth_tth_j1_id", &mc_truth_tth_j1_id, "mc_truth_tth_j1_id/I");
	tree->Branch("mc_truth_tth_j2_id", &mc_truth_tth_j2_id, "mc_truth_tth_j2_id/I");
	tree->Branch("mc_truth_tth_j3_id", &mc_truth_tth_j3_id, "mc_truth_tth_j3_id/I");
	
	tree->Branch("mc_truth_tth_h0_status", &mc_truth_tth_h0_status, "mc_truth_tth_h0_status/I");
	
	tree->Branch("mc_truth_tth_h0W1_status", &mc_truth_tth_h0W1_status, "mc_truth_tth_h0W1_status/I");
	tree->Branch("mc_truth_tth_h0W2_status", &mc_truth_tth_h0W2_status, "mc_truth_tth_h0W2_status/I");
	tree->Branch("mc_truth_tth_h0Wl1_status", &mc_truth_tth_h0Wl1_status, "mc_truth_tth_h0Wl1_status/I");
	tree->Branch("mc_truth_tth_h0Wnu1_status", &mc_truth_tth_h0Wnu1_status, "mc_truth_tth_h0Wnu1_status/I");
	tree->Branch("mc_truth_tth_h0Wtau1_status", &mc_truth_tth_h0Wtau1_status, "mc_truth_tth_h0Wtau1_status/I");
	tree->Branch("mc_truth_tth_h0Wnutau1_status", &mc_truth_tth_h0Wnutau1_status, "mc_truth_tth_h0Wnutau1_status/I");
	tree->Branch("mc_truth_tth_h0Wtaul1_status", &mc_truth_tth_h0Wtaul1_status, "mc_truth_tth_h0Wtaul1_status/I");
	tree->Branch("mc_truth_tth_h0Wtaunu1_status", &mc_truth_tth_h0Wtaunu1_status, "mc_truth_tth_h0Wtaunu1_status/I");
	tree->Branch("mc_truth_tth_h0Wtaunutau1_status", &mc_truth_tth_h0Wtaunutau1_status, "mc_truth_tth_h0Wtaunutau1_status/I");
	tree->Branch("mc_truth_tth_h0Wl2_status", &mc_truth_tth_h0Wl2_status, "mc_truth_tth_h0Wl2_status/I");
	tree->Branch("mc_truth_tth_h0Wnu2_status", &mc_truth_tth_h0Wnu2_status, "mc_truth_tth_h0Wnu2_status/I");
	tree->Branch("mc_truth_tth_h0Wtau2_status", &mc_truth_tth_h0Wtau2_status, "mc_truth_tth_h0Wtau2_status/I");
	tree->Branch("mc_truth_tth_h0Wnutau2_status", &mc_truth_tth_h0Wnutau2_status, "mc_truth_tth_h0Wnutau2_status/I");
	tree->Branch("mc_truth_tth_h0Wtaul2_status", &mc_truth_tth_h0Wtaul2_status, "mc_truth_tth_h0Wtaul2_status/I");
	tree->Branch("mc_truth_tth_h0Wtaunu2_status", &mc_truth_tth_h0Wtaunu2_status, "mc_truth_tth_h0Wtaunu2_status/I");
	tree->Branch("mc_truth_tth_h0Wtaunutau2_status", &mc_truth_tth_h0Wtaunutau2_status, "mc_truth_tth_h0Wtaunutau2_status/I");
	tree->Branch("mc_truth_tth_h0Wq11_status", &mc_truth_tth_h0Wq11_status, "mc_truth_tth_h0Wq11_status/I");
	tree->Branch("mc_truth_tth_h0Wq21_status", &mc_truth_tth_h0Wq21_status, "mc_truth_tth_h0Wq21_status/I");
	tree->Branch("mc_truth_tth_h0Wq12_status", &mc_truth_tth_h0Wq12_status, "mc_truth_tth_h0Wq12_status/I");
	tree->Branch("mc_truth_tth_h0Wq22_status", &mc_truth_tth_h0Wq22_status, "mc_truth_tth_h0Wq22_status/I");
	
	tree->Branch("mc_truth_tth_h0Z1_status", &mc_truth_tth_h0Z1_status, "mc_truth_tth_h0Z1_status/I");
	tree->Branch("mc_truth_tth_h0Z2_status", &mc_truth_tth_h0Z2_status, "mc_truth_tth_h0Z2_status/I");
	tree->Branch("mc_truth_tth_h0Zl11_status", &mc_truth_tth_h0Zl11_status, "mc_truth_tth_h0Zl11_status/I");
	tree->Branch("mc_truth_tth_h0Zl21_status", &mc_truth_tth_h0Zl21_status, "mc_truth_tth_h0Zl21_status/I");
	tree->Branch("mc_truth_tth_h0Ztau11_status", &mc_truth_tth_h0Ztau11_status, "mc_truth_tth_h0Ztau11_status/I");
	tree->Branch("mc_truth_tth_h0Ztau21_status", &mc_truth_tth_h0Ztau21_status, "mc_truth_tth_h0Ztau21_status/I");
	tree->Branch("mc_truth_tth_h0Ztaul11_status", &mc_truth_tth_h0Ztaul11_status, "mc_truth_tth_h0Ztaul11_status/I");
	tree->Branch("mc_truth_tth_h0Ztaul21_status", &mc_truth_tth_h0Ztaul21_status, "mc_truth_tth_h0Ztaul21_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunu11_status", &mc_truth_tth_h0Ztaunu11_status, "mc_truth_tth_h0Ztaunu11_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunu21_status", &mc_truth_tth_h0Ztaunu21_status, "mc_truth_tth_h0Ztaunu21_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau11_status", &mc_truth_tth_h0Ztaunutau11_status, "mc_truth_tth_h0Ztaunutau11_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau21_status", &mc_truth_tth_h0Ztaunutau21_status, "mc_truth_tth_h0Ztaunutau21_status/I");
	tree->Branch("mc_truth_tth_h0Zq11_status", &mc_truth_tth_h0Zq11_status, "mc_truth_tth_h0Zq11_status/I");
	tree->Branch("mc_truth_tth_h0Zq21_status", &mc_truth_tth_h0Zq21_status, "mc_truth_tth_h0Zq21_status/I");
	tree->Branch("mc_truth_tth_h0Zl12_status", &mc_truth_tth_h0Zl12_status, "mc_truth_tth_h0Zl12_status/I");
	tree->Branch("mc_truth_tth_h0Zl22_status", &mc_truth_tth_h0Zl22_status, "mc_truth_tth_h0Zl22_status/I");
	tree->Branch("mc_truth_tth_h0Ztau12_status", &mc_truth_tth_h0Ztau12_status, "mc_truth_tth_h0Ztau12_status/I");
	tree->Branch("mc_truth_tth_h0Ztau22_status", &mc_truth_tth_h0Ztau22_status, "mc_truth_tth_h0Ztau22_status/I");
	tree->Branch("mc_truth_tth_h0Ztaul12_status", &mc_truth_tth_h0Ztaul12_status, "mc_truth_tth_h0Ztaul12_status/I");
	tree->Branch("mc_truth_tth_h0Ztaul22_status", &mc_truth_tth_h0Ztaul22_status, "mc_truth_tth_h0Ztaul22_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunu12_status", &mc_truth_tth_h0Ztaunu12_status, "mc_truth_tth_h0Ztaunu12_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunu22_status", &mc_truth_tth_h0Ztaunu22_status, "mc_truth_tth_h0Ztaunu22_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau12_status", &mc_truth_tth_h0Ztaunutau12_status, "mc_truth_tth_h0Ztaunutau12_status/I");
	tree->Branch("mc_truth_tth_h0Ztaunutau22_status", &mc_truth_tth_h0Ztaunutau22_status, "mc_truth_tth_h0Ztaunutau22_status/I");
	tree->Branch("mc_truth_tth_h0Zq12_status", &mc_truth_tth_h0Zq12_status, "mc_truth_tth_h0Zq12_status/I");
	tree->Branch("mc_truth_tth_h0Zq22_status", &mc_truth_tth_h0Zq22_status, "mc_truth_tth_h0Zq22_status/I");
	tree->Branch("mc_truth_tth_h0Znu11_status", &mc_truth_tth_h0Znu11_status, "mc_truth_tth_h0Znu11_status/I");
	tree->Branch("mc_truth_tth_h0Znu21_status", &mc_truth_tth_h0Znu21_status, "mc_truth_tth_h0Znu21_status/I");
	tree->Branch("mc_truth_tth_h0Znu12_status", &mc_truth_tth_h0Znu12_status, "mc_truth_tth_h0Znu12_status/I");
	tree->Branch("mc_truth_tth_h0Znu22_status", &mc_truth_tth_h0Znu22_status, "mc_truth_tth_h0Znu22_status/I");
	
	tree->Branch("mc_truth_tth_h0tau1_status", &mc_truth_tth_h0tau1_status, "mc_truth_tth_h0tau1_status/I");
	tree->Branch("mc_truth_tth_h0tau2_status", &mc_truth_tth_h0tau2_status, "mc_truth_tth_h0tau2_status/I");
	tree->Branch("mc_truth_tth_h0taul1_status", &mc_truth_tth_h0taul1_status, "mc_truth_tth_h0taul1_status/I");
	tree->Branch("mc_truth_tth_h0taunutau1_status", &mc_truth_tth_h0taunutau1_status, "mc_truth_tth_h0taunutau1_status/I");
	tree->Branch("mc_truth_tth_h0taunu1_status", &mc_truth_tth_h0taunu1_status, "mc_truth_tth_h0taunu1_status/I");
	tree->Branch("mc_truth_tth_h0taul2_status", &mc_truth_tth_h0taul2_status, "mc_truth_tth_h0taul2_status/I");
	tree->Branch("mc_truth_tth_h0taunutau2_status", &mc_truth_tth_h0taunutau2_status, "mc_truth_tth_h0taunutau2_status/I");
	tree->Branch("mc_truth_tth_h0taunu2_status", &mc_truth_tth_h0taunu2_status, "mc_truth_tth_h0taunu2_status/I");
	
	tree->Branch("mc_truth_tth_t1_status", &mc_truth_tth_t1_status, "mc_truth_tth_t1_status/I");
	tree->Branch("mc_truth_tth_t2_status", &mc_truth_tth_t2_status, "mc_truth_tth_t2_status/I");
	tree->Branch("mc_truth_tth_tb1_status", &mc_truth_tth_tb1_status, "mc_truth_tth_tb1_status/I");
	tree->Branch("mc_truth_tth_tb2_status", &mc_truth_tth_tb2_status, "mc_truth_tth_tb2_status/I");
	
	tree->Branch("mc_truth_tth_tW1_status", &mc_truth_tth_tW1_status, "mc_truth_tth_tW1_status/I");
	tree->Branch("mc_truth_tth_tWnu1_status", &mc_truth_tth_tWnu1_status, "mc_truth_tth_tWnu1_status/I");
	tree->Branch("mc_truth_tth_tWnutau1_status", &mc_truth_tth_tWnutau1_status, "mc_truth_tth_tWnutau1_status/I");
	tree->Branch("mc_truth_tth_tWl1_status", &mc_truth_tth_tWl1_status, "mc_truth_tth_tWl1_status/I");
	tree->Branch("mc_truth_tth_tWtau1_status", &mc_truth_tth_tWtau1_status, "mc_truth_tth_tWtau1_status/I");
	tree->Branch("mc_truth_tth_tWtaunu1_status", &mc_truth_tth_tWtaunu1_status, "mc_truth_tth_tWtaunu1_status/I");
	tree->Branch("mc_truth_tth_tWtaunutau1_status", &mc_truth_tth_tWtaunutau1_status, "mc_truth_tth_tWtaunutau1_status/I");
	tree->Branch("mc_truth_tth_tWtaul1_status", &mc_truth_tth_tWtaul1_status, "mc_truth_tth_tWtaul1_status/I");
	tree->Branch("mc_truth_tth_tWq11_status", &mc_truth_tth_tWq11_status, "mc_truth_tth_tWq11_status/I");
	tree->Branch("mc_truth_tth_tWq21_status", &mc_truth_tth_tWq21_status, "mc_truth_tth_tWq21_status/I");

	tree->Branch("mc_truth_tth_tW2_status", &mc_truth_tth_tW2_status, "mc_truth_tth_tW2_status/I");
	tree->Branch("mc_truth_tth_tWnu2_status", &mc_truth_tth_tWnu2_status, "mc_truth_tth_tWnu2_status/I");
	tree->Branch("mc_truth_tth_tWnutau2_status", &mc_truth_tth_tWnutau2_status, "mc_truth_tth_tWnutau2_status/I");
	tree->Branch("mc_truth_tth_tWl2_status", &mc_truth_tth_tWl2_status, "mc_truth_tth_tWl2_status/I");
	tree->Branch("mc_truth_tth_tWtau2_status", &mc_truth_tth_tWtau2_status, "mc_truth_tth_tWtau2_status/I");
	tree->Branch("mc_truth_tth_tWtaunu2_status", &mc_truth_tth_tWtaunu2_status, "mc_truth_tth_tWtaunu2_status/I");
	tree->Branch("mc_truth_tth_tWtaunutau2_status", &mc_truth_tth_tWtaunutau2_status, "mc_truth_tth_tWtaunutau2_status/I");
	tree->Branch("mc_truth_tth_tWtaul2_status", &mc_truth_tth_tWtaul2_status, "mc_truth_tth_tWtaul2_status/I");
	tree->Branch("mc_truth_tth_tWq12_status", &mc_truth_tth_tWq12_status, "mc_truth_tth_tWq12_status/I");
	tree->Branch("mc_truth_tth_tWq22_status", &mc_truth_tth_tWq22_status, "mc_truth_tth_tWq22_status/I");
	
	tree->Branch("mc_truth_tth_j1_status", &mc_truth_tth_j1_status, "mc_truth_tth_j1_status/I");
	tree->Branch("mc_truth_tth_j2_status", &mc_truth_tth_j2_status, "mc_truth_tth_j2_status/I");
	tree->Branch("mc_truth_tth_j3_status", &mc_truth_tth_j3_status, "mc_truth_tth_j3_status/I");
     }   

   if( doWrite("mc_truth_tzq") )
     {
	tree->Branch("mc_truth_tzq_channel", &mc_truth_tzq_channel, "mc_truth_tzq_channel/I");

	tree->Branch("mc_truth_tzq_Z_p4", "TLorentzVector", &mc_truth_tzq_Z_p4);
	tree->Branch("mc_truth_tzq_Zl1_p4", "TLorentzVector", &mc_truth_tzq_Zl1_p4);
	tree->Branch("mc_truth_tzq_Zl2_p4", "TLorentzVector", &mc_truth_tzq_Zl2_p4);
	tree->Branch("mc_truth_tzq_Ztau1_p4", "TLorentzVector", &mc_truth_tzq_Ztau1_p4);
	tree->Branch("mc_truth_tzq_Ztau2_p4", "TLorentzVector", &mc_truth_tzq_Ztau2_p4);
	tree->Branch("mc_truth_tzq_Ztaul1_p4", "TLorentzVector", &mc_truth_tzq_Ztaul1_p4);
	tree->Branch("mc_truth_tzq_Ztaul2_p4", "TLorentzVector", &mc_truth_tzq_Ztaul2_p4);
	tree->Branch("mc_truth_tzq_Ztaunu1_p4", "TLorentzVector", &mc_truth_tzq_Ztaunu1_p4);
	tree->Branch("mc_truth_tzq_Ztaunu2_p4", "TLorentzVector", &mc_truth_tzq_Ztaunu2_p4);
	tree->Branch("mc_truth_tzq_Ztaunutau1_p4", "TLorentzVector", &mc_truth_tzq_Ztaunutau1_p4);
	tree->Branch("mc_truth_tzq_Ztaunutau2_p4", "TLorentzVector", &mc_truth_tzq_Ztaunutau2_p4);
   
	tree->Branch("mc_truth_tzq_t_p4", "TLorentzVector", &mc_truth_tzq_t_p4);
	tree->Branch("mc_truth_tzq_tb_p4", "TLorentzVector", &mc_truth_tzq_tb_p4);
	tree->Branch("mc_truth_tzq_tW_p4", "TLorentzVector", &mc_truth_tzq_tW_p4);
	tree->Branch("mc_truth_tzq_tWnu_p4", "TLorentzVector", &mc_truth_tzq_tWnu_p4);
	tree->Branch("mc_truth_tzq_tWnutau_p4", "TLorentzVector", &mc_truth_tzq_tWnutau_p4);
	tree->Branch("mc_truth_tzq_tWl_p4", "TLorentzVector", &mc_truth_tzq_tWl_p4);
	tree->Branch("mc_truth_tzq_tWtau_p4", "TLorentzVector", &mc_truth_tzq_tWtau_p4);
	tree->Branch("mc_truth_tzq_tWtaunu_p4", "TLorentzVector", &mc_truth_tzq_tWtaunu_p4);
	tree->Branch("mc_truth_tzq_tWtaunutau_p4", "TLorentzVector", &mc_truth_tzq_tWtaunutau_p4);
	tree->Branch("mc_truth_tzq_tWtaul_p4", "TLorentzVector", &mc_truth_tzq_tWtaul_p4);
	tree->Branch("mc_truth_tzq_tWq1_p4", "TLorentzVector", &mc_truth_tzq_tWq1_p4);
	tree->Branch("mc_truth_tzq_tWq2_p4", "TLorentzVector", &mc_truth_tzq_tWq2_p4);
	
	tree->Branch("mc_truth_tzq_j1_p4", "TLorentzVector", &mc_truth_tzq_j1_p4);
	tree->Branch("mc_truth_tzq_j2_p4", "TLorentzVector", &mc_truth_tzq_j2_p4);
	tree->Branch("mc_truth_tzq_j3_p4", "TLorentzVector", &mc_truth_tzq_j3_p4);

	tree->Branch("mc_truth_tzq_Z_id", &mc_truth_tzq_Z_id, "mc_truth_tzq_Z_id/I");
	tree->Branch("mc_truth_tzq_Zl1_id", &mc_truth_tzq_Zl1_id, "mc_truth_tzq_Zl1_id/I");
	tree->Branch("mc_truth_tzq_Zl2_id", &mc_truth_tzq_Zl2_id, "mc_truth_tzq_Zl2_id/I");
	tree->Branch("mc_truth_tzq_Ztau1_id", &mc_truth_tzq_Ztau1_id, "mc_truth_tzq_Ztau1_id/I");
	tree->Branch("mc_truth_tzq_Ztau2_id", &mc_truth_tzq_Ztau2_id, "mc_truth_tzq_Ztau2_id/I");
	tree->Branch("mc_truth_tzq_Ztaul1_id", &mc_truth_tzq_Ztaul1_id, "mc_truth_tzq_Ztaul1_id/I");
	tree->Branch("mc_truth_tzq_Ztaul2_id", &mc_truth_tzq_Ztaul2_id, "mc_truth_tzq_Ztaul2_id/I");
	tree->Branch("mc_truth_tzq_Ztaunu1_id", &mc_truth_tzq_Ztaunu1_id, "mc_truth_tzq_Ztaunu1_id/I");
	tree->Branch("mc_truth_tzq_Ztaunu2_id", &mc_truth_tzq_Ztaunu2_id, "mc_truth_tzq_Ztaunu2_id/I");
	tree->Branch("mc_truth_tzq_Ztaunutau1_id", &mc_truth_tzq_Ztaunutau1_id, "mc_truth_tzq_Ztaunutau1_id/I");
	tree->Branch("mc_truth_tzq_Ztaunutau2_id", &mc_truth_tzq_Ztaunutau2_id, "mc_truth_tzq_Ztaunutau2_id/I");
   
	tree->Branch("mc_truth_tzq_t_id", &mc_truth_tzq_t_id, "mc_truth_tzq_t_id/I");
	tree->Branch("mc_truth_tzq_tb_id", &mc_truth_tzq_tb_id, "mc_truth_tzq_tb_id/I");
	tree->Branch("mc_truth_tzq_tW_id", &mc_truth_tzq_tW_id, "mc_truth_tzq_tW_id/I");
	tree->Branch("mc_truth_tzq_tWnu_id", &mc_truth_tzq_tWnu_id, "mc_truth_tzq_tWnu_id/I");
	tree->Branch("mc_truth_tzq_tWnutau_id", &mc_truth_tzq_tWnutau_id, "mc_truth_tzq_tWnutau_id/I");
	tree->Branch("mc_truth_tzq_tWl_id", &mc_truth_tzq_tWl_id, "mc_truth_tzq_tWl_id/I");
	tree->Branch("mc_truth_tzq_tWtau_id", &mc_truth_tzq_tWtau_id, "mc_truth_tzq_tWtau_id/I");
	tree->Branch("mc_truth_tzq_tWtaunu_id", &mc_truth_tzq_tWtaunu_id, "mc_truth_tzq_tWtaunu_id/I");
	tree->Branch("mc_truth_tzq_tWtaunutau_id", &mc_truth_tzq_tWtaunutau_id, "mc_truth_tzq_tWtaunutau_id/I");
	tree->Branch("mc_truth_tzq_tWtaul_id", &mc_truth_tzq_tWtaul_id, "mc_truth_tzq_tWtaul_id/I");
	tree->Branch("mc_truth_tzq_tWq1_id", &mc_truth_tzq_tWq1_id, "mc_truth_tzq_tWq1_id/I");
	tree->Branch("mc_truth_tzq_tWq2_id", &mc_truth_tzq_tWq2_id, "mc_truth_tzq_tWq2_id/I");
	
	tree->Branch("mc_truth_tzq_j1_id", &mc_truth_tzq_j1_id, "mc_truth_tzq_j1_id/I");
	tree->Branch("mc_truth_tzq_j2_id", &mc_truth_tzq_j2_id, "mc_truth_tzq_j2_id/I");
	tree->Branch("mc_truth_tzq_j3_id", &mc_truth_tzq_j3_id, "mc_truth_tzq_j3_id/I");	
	
	tree->Branch("mc_truth_tzq_Z_status", &mc_truth_tzq_Z_status, "mc_truth_tzq_Z_status/I");
	tree->Branch("mc_truth_tzq_Zl1_status", &mc_truth_tzq_Zl1_status, "mc_truth_tzq_Zl1_status/I");
	tree->Branch("mc_truth_tzq_Zl2_status", &mc_truth_tzq_Zl2_status, "mc_truth_tzq_Zl2_status/I");
	tree->Branch("mc_truth_tzq_Ztau1_status", &mc_truth_tzq_Ztau1_status, "mc_truth_tzq_Ztau1_status/I");
	tree->Branch("mc_truth_tzq_Ztau2_status", &mc_truth_tzq_Ztau2_status, "mc_truth_tzq_Ztau2_status/I");
	tree->Branch("mc_truth_tzq_Ztaul1_status", &mc_truth_tzq_Ztaul1_status, "mc_truth_tzq_Ztaul1_status/I");
	tree->Branch("mc_truth_tzq_Ztaul2_status", &mc_truth_tzq_Ztaul2_status, "mc_truth_tzq_Ztaul2_status/I");
	tree->Branch("mc_truth_tzq_Ztaunu1_status", &mc_truth_tzq_Ztaunu1_status, "mc_truth_tzq_Ztaunu1_status/I");
	tree->Branch("mc_truth_tzq_Ztaunu2_status", &mc_truth_tzq_Ztaunu2_status, "mc_truth_tzq_Ztaunu2_status/I");
	tree->Branch("mc_truth_tzq_Ztaunutau1_status", &mc_truth_tzq_Ztaunutau1_status, "mc_truth_tzq_Ztaunutau1_status/I");
	tree->Branch("mc_truth_tzq_Ztaunutau2_status", &mc_truth_tzq_Ztaunutau2_status, "mc_truth_tzq_Ztaunutau2_status/I");
   
	tree->Branch("mc_truth_tzq_t_status", &mc_truth_tzq_t_status, "mc_truth_tzq_t_status/I");
	tree->Branch("mc_truth_tzq_tb_status", &mc_truth_tzq_tb_status, "mc_truth_tzq_tb_status/I");
	tree->Branch("mc_truth_tzq_tW_status", &mc_truth_tzq_tW_status, "mc_truth_tzq_tW_status/I");
	tree->Branch("mc_truth_tzq_tWnu_status", &mc_truth_tzq_tWnu_status, "mc_truth_tzq_tWnu_status/I");
	tree->Branch("mc_truth_tzq_tWnutau_status", &mc_truth_tzq_tWnutau_status, "mc_truth_tzq_tWnutau_status/I");
	tree->Branch("mc_truth_tzq_tWl_status", &mc_truth_tzq_tWl_status, "mc_truth_tzq_tWl_status/I");
	tree->Branch("mc_truth_tzq_tWtau_status", &mc_truth_tzq_tWtau_status, "mc_truth_tzq_tWtau_status/I");
	tree->Branch("mc_truth_tzq_tWtaunu_status", &mc_truth_tzq_tWtaunu_status, "mc_truth_tzq_tWtaunu_status/I");
	tree->Branch("mc_truth_tzq_tWtaunutau_status", &mc_truth_tzq_tWtaunutau_status, "mc_truth_tzq_tWtaunutau_status/I");
	tree->Branch("mc_truth_tzq_tWtaul_status", &mc_truth_tzq_tWtaul_status, "mc_truth_tzq_tWtaul_status/I");
	tree->Branch("mc_truth_tzq_tWq1_status", &mc_truth_tzq_tWq1_status, "mc_truth_tzq_tWq1_status/I");
	tree->Branch("mc_truth_tzq_tWq2_status", &mc_truth_tzq_tWq2_status, "mc_truth_tzq_tWq2_status/I");
	
	tree->Branch("mc_truth_tzq_j1_status", &mc_truth_tzq_j1_status, "mc_truth_tzq_j1_status/I");
	tree->Branch("mc_truth_tzq_j2_status", &mc_truth_tzq_j2_status, "mc_truth_tzq_j2_status/I");
	tree->Branch("mc_truth_tzq_j3_status", &mc_truth_tzq_j3_status, "mc_truth_tzq_j3_status/I");
     }

   if( doWrite("gen_all") )
     {
	tree->Branch("gen_n", &gen_n, "gen_n/I");
	tree->Branch("gen_pt", "std::vector<float>", &gen_pt);
	tree->Branch("gen_eta", "std::vector<float>", &gen_eta);
	tree->Branch("gen_phi", "std::vector<float>", &gen_phi);
	tree->Branch("gen_m", "std::vector<float>", &gen_m);
	tree->Branch("gen_status", "std::vector<int>", &gen_status);
	tree->Branch("gen_id", "std::vector<int>", &gen_id);
	tree->Branch("gen_charge", "std::vector<int>", &gen_charge);
	tree->Branch("gen_index", "std::vector<int>", &gen_index);
	tree->Branch("gen_mother_index", "std::vector<int>", &gen_mother_index);
	tree->Branch("gen_daughter_n", "std::vector<int>", &gen_daughter_n);
	tree->Branch("gen_daughter_index", "std::vector<std::vector<int> >", &gen_daughter_index);
     }   
}

bool FlatTree::doWrite(std::string name)
{
   std::map<std::string,bool>::iterator it = conf.find(name);
   if( it != conf.end() )
     return it->second;
   else
     return 0;
}
