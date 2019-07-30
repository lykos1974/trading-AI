/*
 * Mutation.h
 *
 *  Created on: Jul 27, 2019
 *      Author: sakex
 */

#ifndef NEURALNETWORK_MUTATION_H_
#define NEURALNETWORK_MUTATION_H_

#include "Mutable.h"
#include "Phenotype.h"

namespace NeuralNetwork {

class Mutation: public Mutable {
public:
	Mutation(Phenotype * phenotype);
	~Mutation() { };

	unsigned get_iterations() const;
	void mutate();

private:
	Phenotype * phenotype;
	float gradient = 0;
	unsigned iterations = 0;
};

} /* namespace NeuralNetwork */

#endif /* NEURALNETWORK_MUTATION_H_ */
