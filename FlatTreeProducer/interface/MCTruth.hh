#ifndef MCTRUTH_H
#define MCTRUTH_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#include "FWCore/Framework/interface/Event.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"

#include "IPHCFlatTree/FlatTreeProducer/interface/FlatTree.hh"

#define DEFVAL -777

class MCTruth
{
 public:
   
   MCTruth() {};

   class GenPart
     {
      public:
	GenPart() {};

	float pt;
	float eta;
	float phi;
	float m;
	float E;
	int status;
	int id;
	int barcode;
	float dr;
     };   
   
   void Init(FlatTree &tree);

   void fillGenParticles(const edm::Event& iEvent,
			 const edm::EventSetup& iSetup,
			 FlatTree& tree,
			 const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);

   void fillGenPV(const edm::Event& iEvent,
		  const edm::EventSetup& iSetup,
		  FlatTree& tree,
		  const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);

   void fillStopNeutralinoMass(const edm::Event& iEvent,
		  const edm::EventSetup& iSetup,
		  FlatTree& tree,
		  const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);

   void fillTopStopDecayChain(const edm::Event& iEvent,
			       const edm::EventSetup& iSetup,
			       FlatTree& tree,
			       const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);

   static bool sortByDR(GenPart* &p1,
			GenPart* &p2)
     {    
	return (p1->dr < p2->dr);
     };
   
   std::vector<GenPart*> doMatch(const edm::Event& iEvent,
				 const edm::EventSetup& iSetup,
				 const edm::Handle<std::vector<reco::GenParticle> >& GenParticles,
				 float pt, float eta, float phi, int pdgId);
   
   std::vector<GenPart*> doMatchTau(const edm::Event& iEvent,
				    const edm::EventSetup& iSetup,
				    const edm::Handle<std::vector<reco::GenParticle> >& GenParticles,
				    float pt, float eta, float phi, int pdgId);

   std::vector<GenPart*> doMatchConv(const edm::Event& iEvent,
				     const edm::EventSetup& iSetup,
				     const edm::Handle<std::vector<reco::GenParticle> >& GenParticles,
				     float pt, float eta, float phi, int pdgId);
   
   reco::GenParticle* getUnique(const reco::GenParticle* p,
				bool verbose);
   
   void fillTTHSignalGenParticles(const edm::Event& iEvent,
				  const edm::EventSetup& iSetup,
				  FlatTree& tree,
				  const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);

   void fillTTZSignalGenParticles(const edm::Event& iEvent,
				  const edm::EventSetup& iSetup,
				  FlatTree& tree,
				  const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);

   void fillTTWSignalGenParticles(const edm::Event& iEvent,
				  const edm::EventSetup& iSetup,
				  FlatTree& tree,
				  const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);
   
   void fillTZQSignalGenParticles(const edm::Event& iEvent,
				  const edm::EventSetup& iSetup,
				  FlatTree& tree,
				  const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);

   void fillTHQSignalGenParticles(const edm::Event& iEvent,
				  const edm::EventSetup& iSetup,
				  FlatTree& tree,
				  const edm::Handle<std::vector<reco::GenParticle> >& GenParticles);
   
   void p4toTLV(reco::Particle::LorentzVector vp4,
		TLorentzVector& tlv);
   
   const reco::GenParticle* getMother(const reco::GenParticle&);
};

#endif
