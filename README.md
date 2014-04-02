Thesis: Speech recognition using Kaldi
======================================
This repository contains the source code of the thesis and its presentation.
If you want to read the thesis (at particular version) please open the pdf file: `text/tags/oplatek_NUMBER.pdf`. 
Please, use the highest NUMBER to read the most recent version.

Work described
--------------
This thesis describes work from various projects.
Please, see the overview below.
The links should correspond to the thesis CD content.

 * Alex - Alex Dialogue System Framework(https://github.com/UFAL-DSG/alex) which I extended by work in following files and directories:
    * https://github.com/UFAL-DSG/alex/alex/components/asr/kaldi.py
    * https://github.com/UFAL-DSG/alex/alex/tools/kaldi/
    * https://github.com/UFAL-DSG/alex/alex/PublicTransportInfoCs/hclg/
 * The Kaldi toolkit - Speech recognition toolkit: I use https://github.com/UFAL-DSG/pykaldi repository for my development which I mirror back to my Kaldi sandbox http://sourceforge.net/p/kaldi/code/HEAD/tree/sandbox/oplatek2 which  can be merged to trunk. For example the training scripts are already merged to trunk. I extended the Kaldi toolkit by implementing work in following directories:
    * https://github.com/UFAL-DSG/pykaldi/tree/master/src/onl-rec/
    * https://github.com/UFAL-DSG/pykaldi/tree/master/src/pykaldi/
    * https://github.com/UFAL-DSG/pykaldi/tree/master/egs/vystadial/s5/
      This training scripts are already in the Kaldi trunk but there are separated for Czech and English:
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_en/
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_cz/
 * Fork of Python wrapper of OpenFST, where I improved installation and add several simple functions.
   https://github.com/UFAL-DSG/pyfst
 * Repository for evaluation of OnlineLatgenRecogniser with graphs in Ipython notebook:
   https://github.com/oplatek/pykaldi-eval
 * TODO link to reference documentation for C++ code in Kaldi
 * TODO link to reference documentation for Python code in Kaldi
 * TODO link to reference documentation for Python code in Alex
