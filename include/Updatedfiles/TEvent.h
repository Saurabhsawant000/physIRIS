 // Author: Alisher Sanetullaev  TRIUMF, 2012/10/01                                          
// Rewritten: Matthias Holl, 2017/09/01

#ifndef __TEVENT_H
#define __TEVENT_H

#include <TClass.h>
#include <TObject.h>

class TEvent : public TObject {
	public:
		TEvent(); //! Create
		TEvent(const TEvent &); //!
		virtual ~TEvent() {} //!
		
		std::vector<Double_t>	Qdet_tlP;
		std::vector<Double_t>	Qdet_blP;
		std::vector<Double_t>	YdCsIETot_tlP;
		std::vector<Double_t>	YdCsIETot_blP;
		std::vector<Double_t>	EB_det_tlP;
		std::vector<Double_t>	EB_det_blP;
		std::vector<Double_t>	PB_det_tlP;
		std::vector<Double_t>	PB_det_blP;
		
		//Double_t fQsd;
		
		std::vector<Double_t> 	fEYd_tlP;
		std::vector<Double_t>	fEYd_blP;
		std::vector<Double_t>	fCCsI_blP; 
		std::vector<Double_t>	fCCsI_tlP;     
		std::vector<Double_t>	fECsI_blP; 
		std::vector<Double_t>	fECsI_tlP;
		
		std::vector<Double_t>	fEb_blP;
		std::vector<Double_t>	fPb_blP;
		std::vector<Double_t>	fPby_blP;
		std::vector<Double_t>	fPbxcm_blP;
		std::vector<Double_t>	fEb_tlP;
		std::vector<Double_t>	fPb_tlP;
		std::vector<Double_t>	fPby_tlP;
		std::vector<Double_t>	fPbxcm_tlP;
		std::vector<Double_t>	fThetacm_blP;
		std::vector<Double_t>	fThetacm_tlP;
		std::vector<Double_t>	fTheta_blP;
		std::vector<Double_t>	fTheta_tlP;
				
		Double_t fEBAC;
		Double_t fmA;
		Double_t fma;
		Double_t fmB;
		Double_t fmb;
		Double_t fkBF;
		Double_t fEBeam;
		Double_t fbetaCM;
		Double_t fgammaCM;
		Double_t fPA;
	  	/*Double_t fPBeam;
	  	Double_t fPResid;
	  	Double_t fA;
	  	Double_t fB;
	  	Double_t fC;
	   	*/
			    
		Double_t fLP;	// Light particle energy
		Double_t fHP;	// Heavy particle energy
		Double_t fEB;	// Measured heavy particle energy
		
		void Clear();	//! Clear values
		
	private:
		Int_t fRun; // Current run number
		ClassDef(TEvent,4) // Version
};
#endif
