//implicit declarations of special member functions

class Nec {
public:

};

// all special member functions are implicitly declared
class Nec_ {
public:
	Nec_() = default;   

	~Nec_() = default; 

	Nec_(const Nec_&) = default;
	Nec_& operator=(const Nec_&) = default;

	Nec_(Nec_&&) = default;
	Nec_& operator=(Nec_&&) = default;
};
