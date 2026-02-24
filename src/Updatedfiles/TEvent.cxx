// Author: Alisher Sanetullaev  TRIUMF, 2012/10/01                                           
// Rewritten: Matthias Holl, 2017/09/01
#include <math.h>
#include "TEvent.h"

TEvent::TEvent() {
	//TEvent::Class()->IgnoreTObjectStreamer();
	TEvent::Clear();
	
}

TEvent::TEvent(const TEvent &evt) : TObject(evt) //
{
	// -- Copy constructor.                                                                
	((TEvent&)evt).Copy(*this);
}

void TEvent::Clear(){

	Qdet_tlP.clear();
	Qdet_blP.clear();
	YdCsIETot_tlP.clear();
	YdCsIETot_blP.clear();
	EB_det_tlP.clear();
	EB_det_blP.clear(); //Calculated heavy particle energy
	PB_det_tlP.clear(); //Calculated heavy particle momentum
	PB_det_blP.clear(); //Calculated heavy particle momentum
	
	fEYd_tlP.clear();
	fEYd_blP.clear();
	fCCsI_blP.clear(); 
	fCCsI_tlP.clear();     
	fECsI_blP.clear(); 
	fECsI_tlP.clear();
	
	fEb_blP.clear();
  	fPb_blP.clear();
  	fPby_blP.clear();
  	fPbxcm_blP.clear();
	fEb_tlP.clear();
  	fPb_tlP.clear();
  	fPby_tlP.clear();
  	fPbxcm_tlP.clear();
	fThetacm_blP.clear();
	fThetacm_tlP.clear();
	fTheta_blP.clear();
	fTheta_tlP.clear();
	
	fEBAC = sqrt(-1.);
	fmA = sqrt(-1.);
	fma = sqrt(-1.);
	fmB = sqrt(-1.);
	fmb = sqrt(-1.);
	fkBF = sqrt(-1.);
	fEBeam = sqrt(-1.);
	fbetaCM = sqrt(-1.);
	fgammaCM = sqrt(-1.);
	fPA = sqrt(-1.);
  	/*fPBeam = sqrt(-1.);
  	fPResid = sqrt(-1.);
  	fA = sqrt(-1.);
  	fB = sqrt(-1.);
  	fC = sqrt(-1.);*/

	fLP=0; //Light particle energy
	fHP=0; //Heavy particle energy
	fEB=0; //Measured heavy particle energy
	
}

