#include "schema.h"

namespace SSAGES
{
	//INSERT_DEF_HERE
	std::string SSAGES::JsonSchema::Simulation = "{\"required\": [\"driver\"], \"type\": \"object\", \"properties\": {\"driver\": {\"type\": \"array\"}, \"inputfile\": {\"type\": \"string\"}}}";
	std::string SSAGES::JsonSchema::Driver = "{\"type\": \"array\"}";
	std::string SSAGES::JsonSchema::LAMMPSDriver = "{\"additionalProperties\": false, \"required\": [\"type\", \"MDSteps\", \"logfile\", \"CVs\", \"method\"], \"type\": \"object\", \"properties\": {\"number processors\": {\"type\": \"integer\"}, \"MDSteps\": {\"minimum\": 1, \"type\": \"integer\"}, \"CVs\": {\"minItems\": 1, \"type\": \"array\"}, \"logfile\": {\"type\": \"string\"}, \"type\": {\"enum\": [\"LAMMPS\"], \"type\": \"string\"}, \"method\": {\"type\": \"object\"}, \"inputfile\": {\"type\": \"string\"}}}";
	std::string SSAGES::JsonSchema::TorsionalCV = "{\"additionalProperties\": false, \"required\": [\"type\", \"atom ids\"], \"type\": \"object\", \"properties\": {\"periodic\": {\"type\": \"boolean\"}, \"type\": {\"enum\": [\"Torsional\"], \"type\": \"string\"}, \"atom ids\": {\"minItems\": 4, \"items\": {\"type\": \"integer\"}, \"type\": \"array\", \"maxItems\": 4}}}";
	std::string SSAGES::JsonSchema::ImproperCV = "{\"additionalProperties\": false, \"required\": [\"type\", \"atom ids\"], \"type\": \"object\", \"properties\": {\"periodic\": {\"type\": \"boolean\"}, \"type\": {\"enum\": [\"Improper\"], \"type\": \"string\"}, \"atom ids\": {\"minItems\": 4, \"items\": {\"type\": \"integer\"}, \"type\": \"array\", \"maxItems\": 4}}}";
	std::string SSAGES::JsonSchema::AtomPositionCV = "{\"additionalProperties\": false, \"required\": [\"type\", \"atom id\", \"position\", \"fixx\", \"fixy\", \"fixz\"], \"type\": \"object\", \"properties\": {\"fixz\": {\"type\": \"boolean\"}, \"fixy\": {\"type\": \"boolean\"}, \"fixx\": {\"type\": \"boolean\"}, \"position\": {\"minItems\": 3, \"items\": {\"type\": \"number\"}, \"type\": \"array\", \"maxItems\": 3}, \"type\": {\"enum\": [\"AtomPosition\"], \"type\": \"string\"}, \"atom id\": {\"type\": \"integer\"}}}";
	std::string SSAGES::JsonSchema::AtomCoordinateCV = "{\"additionalProperties\": false, \"required\": [\"type\", \"atom id\", \"dimension\"], \"type\": \"object\", \"properties\": {\"type\": {\"enum\": [\"AtomCoordinate\"], \"type\": \"string\"}, \"dimension\": {\"enum\": [\"x\", \"y\", \"z\"], \"type\": \"string\"}, \"atom id\": {\"type\": \"integer\"}}}";
	std::string SSAGES::JsonSchema::CVs = "{\"type\": \"array\"}";
	std::string SSAGES::JsonSchema::UmbrellaMethod = "{\"additionalProperties\": false, \"required\": [\"type\", \"ksprings\", \"centers\"], \"type\": \"object\", \"properties\": {\"frequency\": {\"minimum\": 1, \"type\": \"integer\"}, \"ksprings\": {\"minItems\": 1, \"items\": {\"type\": \"number\"}, \"type\": \"array\"}, \"type\": {\"enum\": [\"Umbrella\"], \"type\": \"string\"}, \"centers\": {\"minItems\": 1, \"items\": {\"type\": \"number\"}, \"type\": \"array\"}}}";
	std::string SSAGES::JsonSchema::methods = "{\"type\": \"object\"}";
	std::string SSAGES::JsonSchema::MetadynamicsMethod = "{\"additionalProperties\": false, \"required\": [\"type\", \"widths\", \"height\"], \"type\": \"object\", \"properties\": {\"hill frequency\": {\"minimum\": 1, \"type\": \"integer\"}, \"widths\": {\"minItems\": 1, \"items\": {\"type\": \"number\"}, \"type\": \"array\"}, \"frequency\": {\"minimum\": 1, \"type\": \"integer\"}, \"type\": {\"enum\": [\"Metadynamics\"], \"type\": \"string\"}, \"height\": {\"exclusiveMinimum\": true, \"minimum\": 0, \"type\": \"number\"}}}";
	std::string SSAGES::JsonSchema::FTSMethod = "{\"additionalProperties\": false, \"required\": [\"type\", \"centers\", \"block iterations\", \"number samples\", \"kappa\", \"time step\"], \"type\": \"object\", \"properties\": {\"number samples\": {\"minimum\": 1, \"type\": \"integer\"}, \"time step\": {\"exclusiveMinimum\": true, \"minimum\": 0, \"type\": \"number\"}, \"block iterations\": {\"minimum\": 1, \"type\": \"integer\"}, \"frequency\": {\"minimum\": 1, \"type\": \"integer\"}, \"kappa\": {\"minimum\": 0, \"type\": \"number\"}, \"type\": {\"enum\": [\"FTS\"], \"type\": \"string\"}, \"centers\": {\"minItems\": 1, \"items\": {\"type\": \"number\"}, \"type\": \"array\"}}}";
	std::string SSAGES::JsonSchema::ElasticBandMethod = "{\"additionalProperties\": false, \"required\": [\"type\", \"springs\", \"centers\", \"max iterations\", \"equilibration steps\", \"evolution steps\", \"number samples\", \"kstring\", \"time step\"], \"type\": \"object\", \"properties\": {\"number samples\": {\"minimum\": 1, \"type\": \"integer\"}, \"time step\": {\"exclusiveMinimum\": true, \"minimum\": 0, \"type\": \"number\"}, \"frequency\": {\"minimum\": 1, \"type\": \"integer\"}, \"kstring\": {\"minimum\": 0, \"type\": \"number\"}, \"evolution steps\": {\"minimum\": 1, \"type\": \"integer\"}, \"equilibration steps\": {\"minimum\": 1, \"type\": \"integer\"}, \"ksprings\": {\"minItems\": 1, \"items\": {\"type\": \"number\"}, \"type\": \"array\"}, \"max iterations\": {\"minimum\": 1, \"type\": \"integer\"}, \"type\": {\"enum\": [\"ElasticBand\"], \"type\": \"string\"}, \"centers\": {\"minItems\": 1, \"items\": {\"type\": \"number\"}, \"type\": \"array\"}}}";
	
}