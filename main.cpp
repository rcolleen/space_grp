#include "Eigen/Dense"

class Symmetry_Operation(Eigen::Matrix3d rot, std::vector<doubles> translation){
	public:
		Eigen::Matrix3d rotation;
        std::vector<doubles>  translation;

		std::string check_op_type();
///		std::string check_op_type(Symmetry_Operation sym_op){
			//goes through list of checks and returns string of sym op type
			//
				if (find_trace(sym_op.rotation)

				
			}
};

int find_determinant(Eigen::Matrix3d sym_op){
//returns +-1 for the determinant using eigen library
//throw error if not 1or -1
        int det;
	return det
}

int  find_trace(Eigen::Matrix3d mat){
// returns integer value of trace of the rotation matrix
//
return mat.trace()
}

Eigen::Matrix3d load_sym_op()
{//user input or file is read to load sym_op
	//returns eigen matrix of sym op
}

bool has_translation(std::vector<doubles> translation, Eigen::Matrix3d lattice)
{// check if translation is 0 or integer multiple of lattice vectors-> false,
    //else true
    //
   }

int neigens_equal_one(Eigen::Matrix3d rotation){
    //some function that evaluate eigne vlaue and counts how many ones
    double det
      /// det (matrix -lambda*identity)==0, lambda is the eigenvalues
}

std::string check_op_type(Symmetry_Operation sym_op)
{ //take in sym_op returns string of op type
   int trace=find_trace(sym_op.rotation);
   std::string type;
   double det = find_determinant(sym_op.roation);

   if (trace==3) {
       type = "Identity";
       return type}
   if (trace ==-3){
       type = "Inversion";
       return type}
   if (has_translation(sym_op.translation)){
           if ( det ==1){ 
               type = "Screw";
               return type}
           else{ type = "Glide";
               return type;
           }
   }
   if (det ==1){type = "Rotation";
       return type}
   int neigen = neigens_equal_one(sym_op.rotation);
   if (neigen==2){
       type = "Mirror";
       return type}
   else if (neigen==1){ type = "Improper Rotation";
       return type}
   else{type = "Error Type not idenitified!!!";
       return type}
}

int main(argc, argv&)
{ //WHAT is the actual input????
// for now, hard coding example sym_ops

    Symmetry_Operation sym_op;
	std::string op_type = check_op_type(sym_op);
	std::cout<<"This is a "<<op_type<<std::endl;

	}
