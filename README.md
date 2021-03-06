Thesis: Automatic speech recognition using Kaldi
================================================
This repository contains the source code of the thesis and its presentation.
If you want to read the thesis please read the most recent version [text/tags/oplatek_thesis014.pdf](text/tags/oplatek_thesis014.pdf?raw=true). 

(The most recent version should point to file with the highest number in the file name suffix. For older versions see the [text/tags/](text/tags) directory.) 

I presented work overview and results of the thesis at the [UFAL](http://ufal.mff.cuni.cz/) Monday seminar.
The slides are available at [./presentation/tags/oplatek_ufal_seminar2014_04_14_v001.pdf](./presentation/tags/oplatek_ufal_seminar2014_04_14_v001.pdf?raw=true).
The slides for my defence in Czech can be downloaded at [./presentation/tags/oplatek__defence_cs.pdf](./presentation/tags/oplatek_defence_cs.pdf?raw=true).

Work described
--------------
The text of this thesis describes my work on projects listed below:

 * Alex - Alex Dialogue System Framework(https://github.com/UFAL-DSG/alex) where I added following files and directories:
    * ASR component interfacing PyOnlineLatgenRecogniser - https://github.com/UFAL-DSG/alex/alex/components/asr/kaldi.py
    * Kaldi training scripts modified for Alex - https://github.com/UFAL-DSG/alex/alex/tools/kaldi/
    * Decoding graph (HCLG) scripts, and scripts for ASR evaluation - https://github.com/UFAL-DSG/alex/alex/PublicTransportInfoCs/hclg/
 * The Kaldi toolkit - Speech recognition toolkit where I added following directories:
    * Implementation of OnlineLatgenRecogniser and utilities - https://github.com/UFAL-DSG/pykaldi/tree/master/src/onl-rec/
    * Python wrapper PyOnlineLatgenRecogniser and utilities - https://github.com/UFAL-DSG/pykaldi/tree/master/src/pykaldi/
    * Training scripts for acoustic modelling - https://github.com/UFAL-DSG/pykaldi/tree/master/egs/vystadial/s5/
      The training scripts are also accepted in the Kaldi trunk but they are separated for Czech and English:
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_en/
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_cz/
    * Several demos using OnlineLatgenRecogniser and PyOnlineLatgenRecogniser - https://github.com/UFAL-DSG/pykaldi/tree/master/egs/vystadial/online_demo/

   I am developing the new features in https://github.com/UFAL-DSG/pykaldi repository which I mirror back to my Kaldi sandbox http://sourceforge.net/p/kaldi/code/HEAD/tree/sandbox/oplatek2 which  can be merged to Kaldi trunk.
   
 * pyfst - https://github.com/UFAL-DSG/pyfst - Python wrapper of OpenFST, where I improved installation and added several simple functions. Note I forked the original pyfst library.

 * Pykaldi-eval - https://github.com/oplatek/pykaldi-eval - Repository for evaluation OnlineLatgenRecogniser written in IPython notebook. See interesting graphs.
   
 * Alex documentation http://alex.readthedocs.org/en/latest/index.html


 Note: The thesis is compiled for two side printing.
