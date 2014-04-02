Thesis: Automatic speech recognition using Kaldi
================================================
This repository contains the source code of the thesis and its presentation.
If you want to read the thesis (at particular version) please open the pdf file: `text/tags/oplatek_NUMBER.pdf`. 
Please, use the highest NUMBER to read the most recent version.

Work described
--------------
This thesis describes work from various projects.
Please, see the overview below.

 * Alex - Alex Dialogue System Framework(https://github.com/UFAL-DSG/alex) where I added following files and directories:
    * https://github.com/UFAL-DSG/alex/alex/components/asr/kaldi.py
    * https://github.com/UFAL-DSG/alex/alex/tools/kaldi/
    * https://github.com/UFAL-DSG/alex/alex/PublicTransportInfoCs/hclg/
 * The Kaldi toolkit - Speech recognition toolkit where I added following directories:
    * https://github.com/UFAL-DSG/pykaldi/tree/master/src/onl-rec/ - implementation of OnlineLatgenRecogniser and utilities
    * https://github.com/UFAL-DSG/pykaldi/tree/master/src/pykaldi/ - Python wrapper PyOnlineLatgenRecogniser and utilities
    * https://github.com/UFAL-DSG/pykaldi/tree/master/egs/vystadial/s5/  - training scripts for acoustic modelling
      The training scripts are also accepted in the Kaldi trunk but they are separated for Czech and English:
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_en/
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_cz/
      I use https://github.com/UFAL-DSG/pykaldi repository for my development which I mirror back to my Kaldi sandbox http://sourceforge.net/p/kaldi/code/HEAD/tree/sandbox/oplatek2 which  can be merged to trunk. 
 * https://github.com/UFAL-DSG/pyfst - Python wrapper of OpenFST, where I improved installation and add several simple functions. Note we use fork of the original pyfst library
   
 * Repository for evaluation OnlineLatgenRecogniser written in Ipython notebook. See interesting graphs:
   https://github.com/oplatek/pykaldi-eval
 * TODO link to the reference documentation for C++ code in Kaldi
 * TODO link to the reference documentation for Python code in Kaldi
 * TODO link to the reference documentation for Python code in Alex
