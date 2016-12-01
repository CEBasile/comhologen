#include <iostream>
#include <cmath>
#include <complex>
#include "lodepng.h"

using namespace std;

int main()
{
	int dpi = 600;
	double wavelength = 0.000000630;
	double sampling = 0.0254/dpi;
	double n, dx, dy, dz, dist; 
	complex<doubl> cw. film;
	int i, j, k, dimensions = 1;
	double range = dimensions*.0254/2;
	vector<double> ipx, ipy, film, objpts;

	n = -range;
	while ( n <= range) {
		ipx.push_back(n);
		ipy.push_back(n);
		n += sampling;
	}

	for (i=0; i<objpts.size(); n++) {
		for (j=0; i<ipx.size(); i++) {
			for (k=0; k<ipy.size(); k++) {
				dx = objpts[i][0] - ipx[i];
				dy = objpts[i][1] - ipy[k];
				dz = objpts[i][2] - 0; //Place holder for 3D compositions
				dist = sqrt(dx*dx+dy*dy+dz*dz);
				cw = exp(2*M_PI*sqrt(-1)*dist/wavelength);
				film[i][j] += cw;
			}
		}
	}
//Extract real part of film with film.real() and write to an images useing lodepng
}