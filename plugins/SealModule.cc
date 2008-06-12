#include "PluginManager/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "Validation/RecoJets/plugins/Matching_fwd.h"
#include "Validation/RecoJets/plugins/Balancing_fwd.h"
#include "Validation/RecoJets/plugins/CalibAnalyzer.h"

typedef CalibAnalyzer<reco::GenJetCollection, GenJetCaloJetMatch> GenJetClosure;
typedef CalibAnalyzer<reco::CaloJetCollection, CaloJetCaloJetMatch> CompareCalibs;
typedef CalibAnalyzer<reco::GenParticleCollection, PartonCaloJetMatch> PartonClosure;
typedef CalibAnalyzer<reco::GenParticleCollection, PartonGenJetMatch> PartonCorrection;

typedef CalibAnalyzer<reco::PhotonCollection, PhotonCaloJetBalance> PhotonJetClosure;

DEFINE_SEAL_MODULE();
DEFINE_ANOTHER_FWK_MODULE( CompareCalibs );
DEFINE_ANOTHER_FWK_MODULE( GenJetClosure );
DEFINE_ANOTHER_FWK_MODULE( PartonClosure );
DEFINE_ANOTHER_FWK_MODULE( PhotonJetClosure );

#include "Validation/RecoJets/plugins/CaloJetTester.h"

DEFINE_ANOTHER_FWK_MODULE( CaloJetTester );
