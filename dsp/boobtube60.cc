// generated from file './/boobtube60v.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "boobtube60_table.h"

namespace boobtube60 {

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
	id = "boobtube60v";
	name = N_("BoobTube60V");
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
	fConst1 = (3.5842360009747e-37 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.05832814370113e-30 + fConst1))) - 2.93484467011993e-24)) - 3.20269194247309e-22)) - 1.1760874322915e-21);
	fConst3 = (4.83184332168505e-38 * fConst0);
	fConst4 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (3.93684772671733e-31 + fConst3))) - 7.01733487831376e-25)) - 3.97269225886875e-22)) - 3.52472783096648e-20);
	fConst5 = (4.18402440487331e-37 * fConst0);
	fConst6 = (1.2511568428633e-19 + (fConst0 * (3.56335253357013e-20 + (fConst0 * (7.37668466517744e-22 + (fConst0 * (3.89889672963127e-24 + (fConst0 * (2.55481538530891e-30 + fConst5)))))))));
	fConst7 = (5.64040715314412e-38 * fConst0);
	fConst8 = (3.91591625191413e-18 + (fConst0 * (8.90857572569188e-20 + (fConst0 * (6.02389508497213e-22 + (fConst0 * (9.32212224854913e-25 + (fConst0 * (4.80061185551663e-31 + fConst7)))))))));
	fConst9 = (1.33101791793968e-17 + (fConst0 * (3.91591625191413e-18 + (fConst0 * (1.14108894114185e-19 + (fConst0 * (1.15244471435086e-21 + (fConst0 * (3.89916851850205e-24 + (fConst0 * (2.55485989620683e-30 + fConst5)))))))))));
	fConst10 = (4.29897014489411e-16 + (fConst0 * (1.33931244707353e-17 + (fConst0 * (1.5316974752258e-19 + (fConst0 * (7.0156102177965e-22 + (fConst0 * (9.32263295193801e-25 + (fConst0 * (4.80067185984804e-31 + fConst7)))))))))));
	fConst11 = (6.21712889052048e-35 * fConst0);
	fConst12 = ((fConst0 * (2.76316839578686e-28 - fConst11)) - 3.07018710642982e-22);
	fConst13 = (6.61396690480902e-33 * fConst0);
	fConst14 = (fConst13 - 2.93954084658177e-26);
	fConst15 = (1.1760874322915e-21 + (fConst0 * ((fConst0 * (2.93484467011993e-24 + (fConst0 * (fConst1 - 2.05832814370113e-30)))) - 3.20269194247309e-22)));
	fConst16 = (3.52472783096648e-20 + (fConst0 * ((fConst0 * (7.01733487831376e-25 + (fConst0 * (fConst3 - 3.93684772671733e-31)))) - 3.97269225886875e-22)));
	fConst17 = (1.2511568428633e-19 + (fConst0 * ((fConst0 * (7.37668466517744e-22 + (fConst0 * ((fConst0 * (2.55481538530891e-30 - fConst5)) - 3.89889672963127e-24)))) - 3.56335253357013e-20)));
	fConst18 = (3.91591625191413e-18 + (fConst0 * ((fConst0 * (6.02389508497213e-22 + (fConst0 * ((fConst0 * (4.80061185551663e-31 - fConst7)) - 9.32212224854913e-25)))) - 8.90857572569188e-20)));
	fConst19 = ((fConst0 * (3.91591625191413e-18 + (fConst0 * ((fConst0 * (1.15244471435086e-21 + (fConst0 * ((fConst0 * (2.55485989620683e-30 - fConst5)) - 3.89916851850205e-24)))) - 1.14108894114185e-19)))) - 1.33101791793968e-17);
	fConst20 = ((fConst0 * (1.33931244707353e-17 + (fConst0 * ((fConst0 * (7.0156102177965e-22 + (fConst0 * ((fConst0 * (4.80067185984804e-31 - fConst7)) - 9.32263295193801e-25)))) - 1.5316974752258e-19)))) - 4.29897014489411e-16);
	fConst21 = (2.50896520068229e-36 * fConst0);
	fConst22 = (1.1760874322915e-21 + (fConst0 * (3.20269194247309e-22 + (fConst0 * ((fConst0 * (1.02916407185057e-29 - fConst21)) - 8.8045340103598e-24)))));
	fConst23 = (3.38229032517954e-37 * fConst0);
	fConst24 = (3.52472783096648e-20 + (fConst0 * (3.97269225886875e-22 + (fConst0 * ((fConst0 * (1.96842386335866e-30 - fConst23)) - 2.10520046349413e-24)))));
	fConst25 = (2.92881708341132e-36 * fConst0);
	fConst26 = (3.75347052858989e-19 + (fConst0 * ((fConst0 * ((fConst0 * (1.16966901888938e-23 + (fConst0 * (fConst25 - 1.27740769265446e-29)))) - 7.37668466517744e-22)) - 3.56335253357013e-20)));
	fConst27 = (3.94828500720089e-37 * fConst0);
	fConst28 = (1.17477487557424e-17 + (fConst0 * ((fConst0 * ((fConst0 * (2.79663667456474e-24 + (fConst0 * (fConst27 - 2.40030592775831e-30)))) - 6.02389508497213e-22)) - 8.90857572569188e-20)));
	fConst29 = ((fConst0 * (1.17477487557424e-17 + (fConst0 * ((fConst0 * ((fConst0 * (1.16975055555061e-23 + (fConst0 * (fConst25 - 1.27742994810342e-29)))) - 1.15244471435086e-21)) - 1.14108894114185e-19)))) - 6.65508958969838e-17);
	fConst30 = ((fConst0 * (4.01793734122058e-17 + (fConst0 * ((fConst0 * ((fConst0 * (2.7967898855814e-24 + (fConst0 * (fConst27 - 2.40033592992402e-30)))) - 7.0156102177965e-22)) - 1.5316974752258e-19)))) - 2.14948507244705e-15);
	fConst31 = (7.52689560204686e-36 * fConst0);
	fConst32 = ((fConst0 * (9.60807582741928e-22 + (fConst0 * (2.93484467011993e-24 + (fConst0 * (fConst31 - 1.85249532933102e-29)))))) - 3.5282622968745e-21);
	fConst33 = (1.01468709755386e-36 * fConst0);
	fConst34 = ((fConst0 * (1.19180767766062e-21 + (fConst0 * (7.01733487831376e-25 + (fConst0 * (fConst33 - 3.54316295404559e-30)))))) - 1.05741834928995e-19);
	fConst35 = (8.78645125023395e-36 * fConst0);
	fConst36 = (1.2511568428633e-19 + (fConst0 * (1.06900576007104e-19 + (fConst0 * ((fConst0 * ((fConst0 * (2.29933384677802e-29 - fConst35)) - 3.89889672963127e-24)) - 2.21300539955323e-21)))));
	fConst37 = (1.18448550216027e-36 * fConst0);
	fConst38 = (3.91591625191413e-18 + (fConst0 * (2.67257271770756e-19 + (fConst0 * ((fConst0 * ((fConst0 * (4.32055066996496e-30 - fConst37)) - 9.32212224854913e-25)) - 1.80716852549164e-21)))));
	fConst39 = ((fConst0 * (3.91591625191413e-18 + (fConst0 * (3.42326682342554e-19 + (fConst0 * ((fConst0 * ((fConst0 * (2.29937390658615e-29 - fConst35)) - 3.89916851850205e-24)) - 3.45733414305257e-21)))))) - 1.19791612614571e-16);
	fConst40 = ((fConst0 * (1.33931244707353e-17 + (fConst0 * (4.59509242567739e-19 + (fConst0 * ((fConst0 * ((fConst0 * (4.32060467386324e-30 - fConst37)) - 9.32263295193801e-25)) - 2.10468306533895e-21)))))) - 3.86907313040469e-15);
	fConst41 = (1.25448260034114e-35 * fConst0);
	fConst42 = ((fConst0 * ((fConst0 * (1.46742233505997e-23 + (fConst0 * (1.02916407185057e-29 - fConst41)))) - 9.60807582741928e-22)) - 3.5282622968745e-21);
	fConst43 = (1.69114516258977e-36 * fConst0);
	fConst44 = ((fConst0 * ((fConst0 * (3.50866743915688e-24 + (fConst0 * (1.96842386335866e-30 - fConst43)))) - 1.19180767766062e-21)) - 1.05741834928995e-19);
	fConst45 = (1.46440854170566e-35 * fConst0);
	fConst46 = ((fConst0 * (1.06900576007104e-19 + (fConst0 * (2.21300539955323e-21 + (fConst0 * ((fConst0 * (fConst45 - 1.27740769265446e-29)) - 1.94944836481563e-23)))))) - 6.25578421431648e-19);
	fConst47 = (1.97414250360044e-36 * fConst0);
	fConst48 = ((fConst0 * (2.67257271770756e-19 + (fConst0 * (1.80716852549164e-21 + (fConst0 * ((fConst0 * (fConst47 - 2.40030592775831e-30)) - 4.66106112427456e-24)))))) - 1.95795812595706e-17);
	fConst49 = ((fConst0 * ((fConst0 * (3.42326682342554e-19 + (fConst0 * (3.45733414305257e-21 + (fConst0 * ((fConst0 * (fConst45 - 1.27742994810342e-29)) - 1.94958425925102e-23)))))) - 1.95795812595706e-17)) - 6.65508958969838e-17);
	fConst50 = ((fConst0 * ((fConst0 * (4.59509242567739e-19 + (fConst0 * (2.10468306533895e-21 + (fConst0 * ((fConst0 * (fConst47 - 2.40033592992402e-30)) - 4.66131647596901e-24)))))) - 6.69656223536764e-17)) - 2.14948507244705e-15);
	fConst51 = (3.5282622968745e-21 + (fConst0 * ((fConst0 * ((fConst0 * (1.02916407185057e-29 + fConst41)) - 1.46742233505997e-23)) - 9.60807582741928e-22)));
	fConst52 = (1.05741834928995e-19 + (fConst0 * ((fConst0 * ((fConst0 * (1.96842386335866e-30 + fConst43)) - 3.50866743915688e-24)) - 1.19180767766062e-21)));
	fConst53 = ((fConst0 * ((fConst0 * (2.21300539955323e-21 + (fConst0 * (1.94944836481563e-23 + (fConst0 * (0 - (1.27740769265446e-29 + fConst45))))))) - 1.06900576007104e-19)) - 6.25578421431648e-19);
	fConst54 = ((fConst0 * ((fConst0 * (1.80716852549164e-21 + (fConst0 * (4.66106112427456e-24 + (fConst0 * (0 - (2.40030592775831e-30 + fConst47))))))) - 2.67257271770756e-19)) - 1.95795812595706e-17);
	fConst55 = (6.65508958969838e-17 + (fConst0 * ((fConst0 * ((fConst0 * (3.45733414305257e-21 + (fConst0 * (1.94958425925102e-23 + (fConst0 * (0 - (1.27742994810342e-29 + fConst45))))))) - 3.42326682342554e-19)) - 1.95795812595706e-17)));
	fConst56 = (2.14948507244705e-15 + (fConst0 * ((fConst0 * ((fConst0 * (2.10468306533895e-21 + (fConst0 * (4.66131647596901e-24 + (fConst0 * (0 - (2.40033592992402e-30 + fConst47))))))) - 4.59509242567739e-19)) - 6.69656223536764e-17)));
	fConst57 = (3.5282622968745e-21 + (fConst0 * (9.60807582741928e-22 + (fConst0 * ((fConst0 * (0 - (1.85249532933102e-29 + fConst31))) - 2.93484467011993e-24)))));
	fConst58 = (1.05741834928995e-19 + (fConst0 * (1.19180767766062e-21 + (fConst0 * ((fConst0 * (0 - (3.54316295404559e-30 + fConst33))) - 7.01733487831376e-25)))));
	fConst59 = (1.2511568428633e-19 + (fConst0 * ((fConst0 * ((fConst0 * (3.89889672963127e-24 + (fConst0 * (2.29933384677802e-29 + fConst35)))) - 2.21300539955323e-21)) - 1.06900576007104e-19)));
	fConst60 = (3.91591625191413e-18 + (fConst0 * ((fConst0 * ((fConst0 * (9.32212224854913e-25 + (fConst0 * (4.32055066996496e-30 + fConst37)))) - 1.80716852549164e-21)) - 2.67257271770756e-19)));
	fConst61 = (1.19791612614571e-16 + (fConst0 * (3.91591625191413e-18 + (fConst0 * ((fConst0 * ((fConst0 * (3.89916851850205e-24 + (fConst0 * (2.29937390658615e-29 + fConst35)))) - 3.45733414305257e-21)) - 3.42326682342554e-19)))));
	fConst62 = (3.86907313040469e-15 + (fConst0 * (1.33931244707353e-17 + (fConst0 * ((fConst0 * ((fConst0 * (9.32263295193801e-25 + (fConst0 * (4.32060467386324e-30 + fConst37)))) - 2.10468306533895e-21)) - 4.59509242567739e-19)))));
	fConst63 = ((fConst0 * (3.20269194247309e-22 + (fConst0 * (8.8045340103598e-24 + (fConst0 * (1.02916407185057e-29 + fConst21)))))) - 1.1760874322915e-21);
	fConst64 = ((fConst0 * (3.97269225886875e-22 + (fConst0 * (2.10520046349413e-24 + (fConst0 * (1.96842386335866e-30 + fConst23)))))) - 3.52472783096648e-20);
	fConst65 = (3.75347052858989e-19 + (fConst0 * (3.56335253357013e-20 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.27740769265446e-29 + fConst25))) - 1.16966901888938e-23)) - 7.37668466517744e-22)))));
	fConst66 = (1.17477487557424e-17 + (fConst0 * (8.90857572569188e-20 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (2.40030592775831e-30 + fConst27))) - 2.79663667456474e-24)) - 6.02389508497213e-22)))));
	fConst67 = (6.65508958969838e-17 + (fConst0 * (1.17477487557424e-17 + (fConst0 * (1.14108894114185e-19 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.27742994810342e-29 + fConst25))) - 1.16975055555061e-23)) - 1.15244471435086e-21)))))));
	fConst68 = (2.14948507244705e-15 + (fConst0 * (4.01793734122058e-17 + (fConst0 * (1.5316974752258e-19 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (2.40033592992402e-30 + fConst27))) - 2.7967898855814e-24)) - 7.0156102177965e-22)))))));
	fConst69 = (4.35199022336434e-34 * fConst0);
	fConst70 = (9.21056131928947e-22 + (fConst0 * (fConst69 - 1.38158419789343e-27)));
	fConst71 = (3.30698345240451e-32 * fConst0);
	fConst72 = (8.8186225397453e-26 - fConst71);
	fConst73 = (1.3055970670093e-33 * fConst0);
	fConst74 = ((fConst0 * (2.48685155620817e-27 - fConst73)) - 3.07018710642982e-22);
	fConst75 = (5.95257021432812e-32 * fConst0);
	fConst76 = (fConst75 - 2.93954084658177e-26);
	fConst77 = (2.17599511168217e-33 * fConst0);
	fConst78 = ((fConst0 * (fConst77 - 1.38158419789343e-27)) - 1.53509355321491e-21);
	fConst79 = (0 - (1.46977042329088e-25 + fConst71));
	fConst80 = (1.53509355321491e-21 + (fConst0 * (0 - (1.38158419789343e-27 + fConst77))));
	fConst81 = (1.46977042329088e-25 - fConst71);
	fConst82 = (3.07018710642982e-22 + (fConst0 * (2.48685155620817e-27 + fConst73)));
	fConst83 = (2.93954084658177e-26 + fConst75);
	fConst84 = ((fConst0 * (0 - (1.38158419789343e-27 + fConst69))) - 9.21056131928947e-22);
	fConst85 = (0 - (8.8186225397453e-26 + fConst71));
	fConst86 = (3.07018710642982e-22 + (fConst0 * (2.76316839578686e-28 + fConst11)));
	fConst87 = (2.93954084658177e-26 + fConst13);
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
		double fTemp0 = (1.41597650844646e-15 + (fConst0 * (fConst10 + ((fConst9 * fRec0[0]) + (fRec1[0] * (1.33101791793968e-17 + (fConst0 * (fConst8 + ((fConst6 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst4 + (fConst2 * fRec0[0]))) - 1.2511568428633e-19)))))))))));
		fRec2[0] = ((double)input0[i] - ((((((((fRec2[1] * (9.91183555912525e-15 + (fConst0 * (fConst68 + ((fConst67 * fRec0[0]) + (fRec1[0] * (6.65508958969838e-17 + (fConst0 * (fConst66 + ((fConst65 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst64 + (fConst63 * fRec0[0]))) - 3.75347052858989e-19)))))))))))) + (fRec2[2] * (2.97355066773758e-14 + (fConst0 * (fConst62 + ((fConst61 * fRec0[0]) + (fRec1[0] * (1.19791612614571e-16 + (fConst0 * (fConst60 + ((fConst59 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst58 + (fConst57 * fRec0[0]))) - 1.2511568428633e-19))))))))))))) + (fRec2[3] * (4.95591777956263e-14 + (fConst0 * (fConst56 + ((fConst55 * fRec0[0]) + (fRec1[0] * (6.65508958969838e-17 + (fConst0 * (fConst54 + ((fConst53 * fRec0[0]) + (fRec1[0] * (6.25578421431648e-19 + (fConst0 * (fConst52 + (fConst51 * fRec0[0])))))))))))))))) + (fRec2[4] * (4.95591777956263e-14 + (fConst0 * (fConst50 + ((fConst49 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst48 + ((fConst46 * fRec0[0]) + (fRec1[0] * (6.25578421431648e-19 + (fConst0 * (fConst44 + (fConst42 * fRec0[0])))))))) - 6.65508958969838e-17)))))))) + (fRec2[5] * (2.97355066773758e-14 + (fConst0 * (fConst40 + ((fConst39 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst38 + ((fConst36 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst34 + (fConst32 * fRec0[0]))) - 1.2511568428633e-19))))) - 1.19791612614571e-16)))))))) + (fRec2[6] * (9.91183555912525e-15 + (fConst0 * (fConst30 + ((fConst29 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst28 + ((fConst26 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst24 + (fConst22 * fRec0[0]))) - 3.75347052858989e-19))))) - 6.65508958969838e-17)))))))) + (fRec2[7] * (1.41597650844646e-15 + (fConst0 * (fConst20 + ((fConst19 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst18 + ((fConst17 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst16 + (fConst15 * fRec0[0]))) - 1.2511568428633e-19))))) - 1.33101791793968e-17)))))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)tubeclip60((fConst88 * ((fRec1[0] * ((((((((fRec2[0] * (3.26615649620194e-20 + (fConst0 * (fConst87 + (fConst86 * fRec0[0]))))) + (fRec2[1] * ((fConst0 * (fConst85 + (fConst84 * fRec0[0]))) - 3.26615649620194e-20))) + (fRec2[2] * ((fConst0 * (fConst83 + (fConst82 * fRec0[0]))) - 9.79846948860582e-20))) + (fRec2[3] * (9.79846948860582e-20 + (fConst0 * (fConst81 + (fConst80 * fRec0[0])))))) + (fRec2[4] * (9.79846948860582e-20 + (fConst0 * (fConst79 + (fConst78 * fRec0[0])))))) + (fRec2[5] * ((fConst0 * (fConst76 + (fConst74 * fRec0[0]))) - 9.79846948860582e-20))) + (fRec2[6] * ((fConst0 * (fConst72 + (fConst70 * fRec0[0]))) - 3.26615649620194e-20))) + (fRec2[7] * (3.26615649620194e-20 + (fConst0 * (fConst14 + (fConst12 * fRec0[0]))))))) / fTemp0)));
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

} // end namespace boobtube60v
