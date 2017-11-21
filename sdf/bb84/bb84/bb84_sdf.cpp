// bb84.cpp : Defines the entry point for the console application.
//

#include "netxpto.h"

#include "binary_source.h"
#include "qrng_decision_circuit.h"
#include "single_photon_detector.h"
#include "single_photon_source.h"
#include "optical_switch.h"
#include "clock.h"
#include "polarization_beam_splitter.h"
#include "fiber.h"
#include "bit_error_rate.h"



int main()
{
	// #####################################################################################################
	// ########################### Signals Declaration and Inicialization ##################################
	// #####################################################################################################

	Binary NUM_A{ "NUM_A.sgn" };
	Binary NUM_B{ "NUM_B.sgn" };
	Binary NUM_E{ "NUM_E.sgn" };

	Binary MS_A{ "MS_A.sgn" };
	Binary MS_B{ "MS_B.sgn" };
	Binary MS_E{ "MS_E.sgn" };
	Binary BS_2{ "BS_2.sgn" };

	PhotonStream Q_C_1{};
	PhotonStream Q_C_2{};
	PhotonStream Q_C_3{};
	PhotonStream Q_C_4{};
	PhotonStream S_5{};
	PhotonStream S_4{};
	PhotonStream S_3{};
	PhotonStream S_2{};
	PhotonStream SA_3{};

	TimeContinuousAmplitudeContinuousReal CLK_A{ "CLK_A.sgn" };
	TimeContinuousAmplitudeContinuousReal CLK_B{ "CLK_B.sgn" };
	TimeContinuousAmplitudeContinuousReal CLK_E{ "CLK_E.sgn" };

	TimeContinuousAmplitudeContinuousReal Sr_1{ "Sr_1.sgn" };
	TimeContinuousAmplitudeContinuousReal Sr_2{ "Sr_2.sgn" };

	TimeDiscreteAmplitudeContinuousReal St_1{ "St_1.sgn" };
	TimeDiscreteAmplitudeContinuousReal St_2{ "St_2.sgn" };

	TimeDiscreteAmplitudeContinuousReal S_A1{ "S_A1.sgn" };
	TimeDiscreteAmplitudeContinuousReal S_A2{ "S_A2.sgn" };

	TimeContinuousAmplitudeContinuousReal SB_1{ "SB_1.sgn" };
	TimeContinuousAmplitudeContinuousReal SB_2{ "SB_2.sgn" };

    return 0;
}

