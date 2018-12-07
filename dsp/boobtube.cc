// generated from file './/boobtube.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "boobtube_table.h"

namespace boobtube {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec1[2];
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fRec2[8];
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;

	FAUSTFLOAT 	fsliderV0;
	FAUSTFLOAT 	*fsliderV0_;
	double 	fRecV0[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "boobtube";
	name = N_("BoobTube");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<8; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRecV0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (4.21272337897928e-37 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.27634325982934e-30 + fConst1))) - 3.06012930102304e-24)) - 3.34112914661488e-22)) - 1.24454632785108e-21);
	fConst3 = (6.141721072108e-38 * fConst0);
	fConst4 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (4.3166195936922e-31 + fConst3))) - 6.97032597453284e-25)) - 4.10749319412873e-22)) - 3.67884734194988e-20);
	fConst5 = (4.95656594905859e-37 * fConst0);
	fConst6 = (1.32398545516072e-19 + (fConst0 * (3.7155467324332e-20 + (fConst0 * (7.58182302045717e-22 + (fConst0 * (3.96273178509438e-24 + (fConst0 * (2.8035589953592e-30 + fConst5)))))))));
	fConst7 = (7.22616768205703e-38 * fConst0);
	fConst8 = (4.08510783533862e-18 + (fConst0 * (9.13334499281088e-20 + (fConst0 * (6.06022438205464e-22 + (fConst0 * (9.02601318693962e-25 + (fConst0 * (5.26145368693843e-31 + fConst7)))))))));
	fConst9 = (1.40849516506459e-17 + (fConst0 * (4.08510783533862e-18 + (fConst0 * (1.17813159031323e-19 + (fConst0 * (1.17974951322597e-21 + (fConst0 * (3.96303003605133e-24 + (fConst0 * (2.80361172478419e-30 + fConst5)))))))))));
	fConst10 = (4.48670891580287e-16 + (fConst0 * (1.38014322957757e-17 + (fConst0 * (1.55803922077626e-19 + (fConst0 * (7.020438550878e-22 + (fConst0 * (9.02657291605525e-25 + (fConst0 * (5.26153056106271e-31 + fConst7)))))))))));
	fConst11 = (3.73296470687429e-35 * fConst0);
	fConst12 = ((fConst0 * (1.65909542527746e-28 - fConst11)) - 1.84343936141939e-22);
	fConst13 = (3.97123904986627e-33 * fConst0);
	fConst14 = (fConst13 - 1.76499513327389e-26);
	fConst15 = (1.24454632785108e-21 + (fConst0 * ((fConst0 * (3.06012930102304e-24 + (fConst0 * (fConst1 - 2.27634325982934e-30)))) - 3.34112914661488e-22)));
	fConst16 = (3.67884734194988e-20 + (fConst0 * ((fConst0 * (6.97032597453284e-25 + (fConst0 * (fConst3 - 4.3166195936922e-31)))) - 4.10749319412873e-22)));
	fConst17 = (1.32398545516072e-19 + (fConst0 * ((fConst0 * (7.58182302045717e-22 + (fConst0 * ((fConst0 * (2.8035589953592e-30 - fConst5)) - 3.96273178509438e-24)))) - 3.7155467324332e-20)));
	fConst18 = (4.08510783533862e-18 + (fConst0 * ((fConst0 * (6.06022438205464e-22 + (fConst0 * ((fConst0 * (5.26145368693843e-31 - fConst7)) - 9.02601318693962e-25)))) - 9.13334499281088e-20)));
	fConst19 = ((fConst0 * (4.08510783533862e-18 + (fConst0 * ((fConst0 * (1.17974951322597e-21 + (fConst0 * ((fConst0 * (2.80361172478419e-30 - fConst5)) - 3.96303003605133e-24)))) - 1.17813159031323e-19)))) - 1.40849516506459e-17);
	fConst20 = ((fConst0 * (1.38014322957757e-17 + (fConst0 * ((fConst0 * (7.020438550878e-22 + (fConst0 * ((fConst0 * (5.26153056106271e-31 - fConst7)) - 9.02657291605525e-25)))) - 1.55803922077626e-19)))) - 4.48670891580287e-16);
	fConst21 = (2.9489063652855e-36 * fConst0);
	fConst22 = (1.24454632785108e-21 + (fConst0 * (3.34112914661488e-22 + (fConst0 * ((fConst0 * (1.13817162991467e-29 - fConst21)) - 9.18038790306911e-24)))));
	fConst23 = (4.2992047504756e-37 * fConst0);
	fConst24 = (3.67884734194988e-20 + (fConst0 * (4.10749319412873e-22 + (fConst0 * ((fConst0 * (2.1583097968461e-30 - fConst23)) - 2.09109779235985e-24)))));
	fConst25 = (3.46959616434101e-36 * fConst0);
	fConst26 = (3.97195636548215e-19 + (fConst0 * ((fConst0 * ((fConst0 * (1.18881953552831e-23 + (fConst0 * (fConst25 - 1.4017794976796e-29)))) - 7.58182302045717e-22)) - 3.7155467324332e-20)));
	fConst27 = (5.05831737743992e-37 * fConst0);
	fConst28 = (1.22553235060159e-17 + (fConst0 * ((fConst0 * ((fConst0 * (2.70780395608189e-24 + (fConst0 * (fConst27 - 2.63072684346922e-30)))) - 6.06022438205464e-22)) - 9.13334499281088e-20)));
	fConst29 = ((fConst0 * (1.22553235060159e-17 + (fConst0 * ((fConst0 * ((fConst0 * (1.1889090108154e-23 + (fConst0 * (fConst25 - 1.40180586239209e-29)))) - 1.17974951322597e-21)) - 1.17813159031323e-19)))) - 7.04247582532297e-17);
	fConst30 = ((fConst0 * (4.14042968873272e-17 + (fConst0 * ((fConst0 * ((fConst0 * (2.70797187481657e-24 + (fConst0 * (fConst27 - 2.63076528053136e-30)))) - 7.020438550878e-22)) - 1.55803922077626e-19)))) - 2.24335445790143e-15);
	fConst31 = (8.84671909585649e-36 * fConst0);
	fConst32 = ((fConst0 * (1.00233874398447e-21 + (fConst0 * (3.06012930102304e-24 + (fConst0 * (fConst31 - 2.04870893384641e-29)))))) - 3.73363898355323e-21);
	fConst33 = (1.28976142514268e-36 * fConst0);
	fConst34 = ((fConst0 * (1.23224795823862e-21 + (fConst0 * (6.97032597453284e-25 + (fConst0 * (fConst33 - 3.88495763432298e-30)))))) - 1.10365420258496e-19);
	fConst35 = (1.0408788493023e-35 * fConst0);
	fConst36 = (1.32398545516072e-19 + (fConst0 * (1.11466401972996e-19 + (fConst0 * ((fConst0 * ((fConst0 * (2.52320309582328e-29 - fConst35)) - 3.96273178509438e-24)) - 2.27454690613715e-21)))));
	fConst37 = (1.51749521323198e-36 * fConst0);
	fConst38 = (4.08510783533862e-18 + (fConst0 * (2.74000349784326e-19 + (fConst0 * ((fConst0 * ((fConst0 * (4.73530831824459e-30 - fConst37)) - 9.02601318693962e-25)) - 1.81806731461639e-21)))));
	fConst39 = ((fConst0 * (4.08510783533862e-18 + (fConst0 * (3.53439477093969e-19 + (fConst0 * ((fConst0 * ((fConst0 * (2.52325055230577e-29 - fConst35)) - 3.96303003605133e-24)) - 3.53924853967791e-21)))))) - 1.26764564855813e-16);
	fConst40 = ((fConst0 * (1.38014322957757e-17 + (fConst0 * (4.67411766232879e-19 + (fConst0 * ((fConst0 * ((fConst0 * (4.73537750495644e-30 - fConst37)) - 9.02657291605525e-25)) - 2.1061315652634e-21)))))) - 4.03803802422258e-15);
	fConst41 = (1.47445318264275e-35 * fConst0);
	fConst42 = ((fConst0 * ((fConst0 * (1.53006465051152e-23 + (fConst0 * (1.13817162991467e-29 - fConst41)))) - 1.00233874398447e-21)) - 3.73363898355323e-21);
	fConst43 = (2.1496023752378e-36 * fConst0);
	fConst44 = ((fConst0 * ((fConst0 * (3.48516298726642e-24 + (fConst0 * (2.1583097968461e-30 - fConst43)))) - 1.23224795823862e-21)) - 1.10365420258496e-19);
	fConst45 = (1.73479808217051e-35 * fConst0);
	fConst46 = ((fConst0 * (1.11466401972996e-19 + (fConst0 * (2.27454690613715e-21 + (fConst0 * ((fConst0 * (fConst45 - 1.4017794976796e-29)) - 1.98136589254719e-23)))))) - 6.61992727580359e-19);
	fConst47 = (2.52915868871996e-36 * fConst0);
	fConst48 = ((fConst0 * (2.74000349784326e-19 + (fConst0 * (1.81806731461639e-21 + (fConst0 * ((fConst0 * (fConst47 - 2.63072684346922e-30)) - 4.51300659346981e-24)))))) - 2.04255391766931e-17);
	fConst49 = ((fConst0 * ((fConst0 * (3.53439477093969e-19 + (fConst0 * (3.53924853967791e-21 + (fConst0 * ((fConst0 * (fConst45 - 1.40180586239209e-29)) - 1.98151501802567e-23)))))) - 2.04255391766931e-17)) - 7.04247582532297e-17);
	fConst50 = ((fConst0 * ((fConst0 * (4.67411766232879e-19 + (fConst0 * (2.1061315652634e-21 + (fConst0 * ((fConst0 * (fConst47 - 2.63076528053136e-30)) - 4.51328645802762e-24)))))) - 6.90071614788786e-17)) - 2.24335445790143e-15);
	fConst51 = (3.73363898355323e-21 + (fConst0 * ((fConst0 * ((fConst0 * (1.13817162991467e-29 + fConst41)) - 1.53006465051152e-23)) - 1.00233874398447e-21)));
	fConst52 = (1.10365420258496e-19 + (fConst0 * ((fConst0 * ((fConst0 * (2.1583097968461e-30 + fConst43)) - 3.48516298726642e-24)) - 1.23224795823862e-21)));
	fConst53 = ((fConst0 * ((fConst0 * (2.27454690613715e-21 + (fConst0 * (1.98136589254719e-23 + (fConst0 * (0 - (1.4017794976796e-29 + fConst45))))))) - 1.11466401972996e-19)) - 6.61992727580359e-19);
	fConst54 = ((fConst0 * ((fConst0 * (1.81806731461639e-21 + (fConst0 * (4.51300659346981e-24 + (fConst0 * (0 - (2.63072684346922e-30 + fConst47))))))) - 2.74000349784326e-19)) - 2.04255391766931e-17);
	fConst55 = (7.04247582532297e-17 + (fConst0 * ((fConst0 * ((fConst0 * (3.53924853967791e-21 + (fConst0 * (1.98151501802567e-23 + (fConst0 * (0 - (1.40180586239209e-29 + fConst45))))))) - 3.53439477093969e-19)) - 2.04255391766931e-17)));
	fConst56 = (2.24335445790143e-15 + (fConst0 * ((fConst0 * ((fConst0 * (2.1061315652634e-21 + (fConst0 * (4.51328645802762e-24 + (fConst0 * (0 - (2.63076528053136e-30 + fConst47))))))) - 4.67411766232879e-19)) - 6.90071614788786e-17)));
	fConst57 = (3.73363898355323e-21 + (fConst0 * (1.00233874398447e-21 + (fConst0 * ((fConst0 * (0 - (2.04870893384641e-29 + fConst31))) - 3.06012930102304e-24)))));
	fConst58 = (1.10365420258496e-19 + (fConst0 * (1.23224795823862e-21 + (fConst0 * ((fConst0 * (0 - (3.88495763432298e-30 + fConst33))) - 6.97032597453284e-25)))));
	fConst59 = (1.32398545516072e-19 + (fConst0 * ((fConst0 * ((fConst0 * (3.96273178509438e-24 + (fConst0 * (2.52320309582328e-29 + fConst35)))) - 2.27454690613715e-21)) - 1.11466401972996e-19)));
	fConst60 = (4.08510783533862e-18 + (fConst0 * ((fConst0 * ((fConst0 * (9.02601318693962e-25 + (fConst0 * (4.73530831824459e-30 + fConst37)))) - 1.81806731461639e-21)) - 2.74000349784326e-19)));
	fConst61 = (1.26764564855813e-16 + (fConst0 * (4.08510783533862e-18 + (fConst0 * ((fConst0 * ((fConst0 * (3.96303003605133e-24 + (fConst0 * (2.52325055230577e-29 + fConst35)))) - 3.53924853967791e-21)) - 3.53439477093969e-19)))));
	fConst62 = (4.03803802422258e-15 + (fConst0 * (1.38014322957757e-17 + (fConst0 * ((fConst0 * ((fConst0 * (9.02657291605525e-25 + (fConst0 * (4.73537750495644e-30 + fConst37)))) - 2.1061315652634e-21)) - 4.67411766232879e-19)))));
	fConst63 = ((fConst0 * (3.34112914661488e-22 + (fConst0 * (9.18038790306911e-24 + (fConst0 * (1.13817162991467e-29 + fConst21)))))) - 1.24454632785108e-21);
	fConst64 = ((fConst0 * (4.10749319412873e-22 + (fConst0 * (2.09109779235985e-24 + (fConst0 * (2.1583097968461e-30 + fConst23)))))) - 3.67884734194988e-20);
	fConst65 = (3.97195636548215e-19 + (fConst0 * (3.7155467324332e-20 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.4017794976796e-29 + fConst25))) - 1.18881953552831e-23)) - 7.58182302045717e-22)))));
	fConst66 = (1.22553235060159e-17 + (fConst0 * (9.13334499281088e-20 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (2.63072684346922e-30 + fConst27))) - 2.70780395608189e-24)) - 6.06022438205464e-22)))));
	fConst67 = (7.04247582532297e-17 + (fConst0 * (1.22553235060159e-17 + (fConst0 * (1.17813159031323e-19 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.40180586239209e-29 + fConst25))) - 1.1889090108154e-23)) - 1.17974951322597e-21)))))));
	fConst68 = (2.24335445790143e-15 + (fConst0 * (4.14042968873272e-17 + (fConst0 * (1.55803922077626e-19 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (2.63076528053136e-30 + fConst27))) - 2.70797187481657e-24)) - 7.020438550878e-22)))))));
	fConst69 = (2.61307529481201e-34 * fConst0);
	fConst70 = (5.53031808425816e-22 + (fConst0 * (fConst69 - 8.29547712638728e-28)));
	fConst71 = (1.98561952493313e-32 * fConst0);
	fConst72 = (5.29498539982167e-26 - fConst71);
	fConst73 = (7.83922588443602e-34 * fConst0);
	fConst74 = ((fConst0 * (1.49318588274971e-27 - fConst73)) - 1.84343936141939e-22);
	fConst75 = (3.57411514487964e-32 * fConst0);
	fConst76 = (fConst75 - 1.76499513327389e-26);
	fConst77 = (1.306537647406e-33 * fConst0);
	fConst78 = ((fConst0 * (fConst77 - 8.29547712638728e-28)) - 9.21719680709693e-22);
	fConst79 = (0 - (8.82497566636945e-26 + fConst71));
	fConst80 = (9.21719680709693e-22 + (fConst0 * (0 - (8.29547712638728e-28 + fConst77))));
	fConst81 = (8.82497566636945e-26 - fConst71);
	fConst82 = (1.84343936141939e-22 + (fConst0 * (1.49318588274971e-27 + fConst73)));
	fConst83 = (1.76499513327389e-26 + fConst75);
	fConst84 = ((fConst0 * (0 - (8.29547712638728e-28 + fConst69))) - 5.53031808425816e-22);
	fConst85 = (0 - (5.29498539982167e-26 + fConst71));
	fConst86 = (1.84343936141939e-22 + (fConst0 * (1.65909542527746e-28 + fConst11)));
	fConst87 = (1.76499513327389e-26 + fConst13);
	fConst88 = faustpower<4>(fConst0);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fsliderV0 (*fsliderV0_)
	double 	fSlowV0 = (0.0010000000000000009 * double(fsliderV0));

	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		fRec1[0] = (fSlow1 + (0.993 * fRec1[1]));
		double fTemp0 = (1.49839911177084e-15 + (fConst0 * (fConst10 + ((fConst9 * fRec0[0]) + (fRec1[0] * (1.40849516506459e-17 + (fConst0 * (fConst8 + ((fConst6 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst4 + (fConst2 * fRec0[0]))) - 1.32398545516072e-19)))))))))));
		fRec2[0] = ((double)input0[i] - ((((((((fRec2[1] * (1.04887937823959e-14 + (fConst0 * (fConst68 + ((fConst67 * fRec0[0]) + (fRec1[0] * (7.04247582532297e-17 + (fConst0 * (fConst66 + ((fConst65 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst64 + (fConst63 * fRec0[0]))) - 3.97195636548215e-19)))))))))))) + (fRec2[2] * (3.14663813471877e-14 + (fConst0 * (fConst62 + ((fConst61 * fRec0[0]) + (fRec1[0] * (1.26764564855813e-16 + (fConst0 * (fConst60 + ((fConst59 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst58 + (fConst57 * fRec0[0]))) - 1.32398545516072e-19))))))))))))) + (fRec2[3] * (5.24439689119796e-14 + (fConst0 * (fConst56 + ((fConst55 * fRec0[0]) + (fRec1[0] * (7.04247582532297e-17 + (fConst0 * (fConst54 + ((fConst53 * fRec0[0]) + (fRec1[0] * (6.61992727580359e-19 + (fConst0 * (fConst52 + (fConst51 * fRec0[0])))))))))))))))) + (fRec2[4] * (5.24439689119796e-14 + (fConst0 * (fConst50 + ((fConst49 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst48 + ((fConst46 * fRec0[0]) + (fRec1[0] * (6.61992727580359e-19 + (fConst0 * (fConst44 + (fConst42 * fRec0[0])))))))) - 7.04247582532297e-17)))))))) + (fRec2[5] * (3.14663813471877e-14 + (fConst0 * (fConst40 + ((fConst39 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst38 + ((fConst36 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst34 + (fConst32 * fRec0[0]))) - 1.32398545516072e-19))))) - 1.26764564855813e-16)))))))) + (fRec2[6] * (1.04887937823959e-14 + (fConst0 * (fConst30 + ((fConst29 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst28 + ((fConst26 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst24 + (fConst22 * fRec0[0]))) - 3.97195636548215e-19))))) - 7.04247582532297e-17)))))))) + (fRec2[7] * (1.49839911177084e-15 + (fConst0 * (fConst20 + ((fConst19 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst18 + ((fConst17 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst16 + (fConst15 * fRec0[0]))) - 1.32398545516072e-19))))) - 1.40849516506459e-17)))))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)tubeclip((fConst88 * ((fRec1[0] * ((((((((fRec2[0] * (1.96110570363765e-20 + (fConst0 * (fConst87 + (fConst86 * fRec0[0]))))) + (fRec2[1] * ((fConst0 * (fConst85 + (fConst84 * fRec0[0]))) - 1.96110570363765e-20))) + (fRec2[2] * ((fConst0 * (fConst83 + (fConst82 * fRec0[0]))) - 5.88331711091294e-20))) + (fRec2[3] * (5.88331711091294e-20 + (fConst0 * (fConst81 + (fConst80 * fRec0[0])))))) + (fRec2[4] * (5.88331711091294e-20 + (fConst0 * (fConst79 + (fConst78 * fRec0[0])))))) + (fRec2[5] * ((fConst0 * (fConst76 + (fConst74 * fRec0[0]))) - 5.88331711091294e-20))) + (fRec2[6] * ((fConst0 * (fConst72 + (fConst70 * fRec0[0]))) - 1.96110570363765e-20))) + (fRec2[7] * (1.96110570363765e-20 + (fConst0 * (fConst14 + (fConst12 * fRec0[0]))))))) / fTemp0)));
		// post processing
		for (int i=7; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
	for (int i=0; i<count; i++) {
		fRecV0[0] = ((0.999 * fRecV0[1]) + fSlowV0);
		output0[i] = (FAUSTFLOAT)((double)output0[i] * fRecV0[0]);
		// post processing
		fRecV0[1] = fRecV0[0];
	}

#undef fsliderV0 
#undef fslider0
#undef fslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GAIN: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fsliderV0_ = (float*)data; // , 0.5, 0.0, 1, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   GAIN, 
   TONE, 
   VOLUME,
} PortIndex;
*/

} // end namespace boobtube
