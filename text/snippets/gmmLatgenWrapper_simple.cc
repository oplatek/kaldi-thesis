class GmmLatgenWrapper {
 public:
  // Initialise the field members based on the "command line" arguments.
  bool Setup(int argc, char **argv);
  size_t Decode(size_t max_frames);  // Forward decoding
  // Enqueue any binary data, the data format is determined by OnlBuffSource
  void FrameIn(unsigned char *frame, size_t frame_len); 
  // Last pruning. It is called before getting ASR hypothesis
  void PruneFinal();
  // Outputs one best ASR hypothesis extracted from lattice 
  bool GetBestPath(std::vector<int> &v_out, BaseFloat *prob);
  // Outputs state level lattice. We used it only for debugging.
  bool GetRawLattice(fst::VectorFst<fst::StdArc> *fst_out);
  // Outputs posterior word lattice and the utterance likelihood
  bool GetLattice(fst::VectorFst<fst::LogArc> * out_fst, double *tot_lik);
  // Empty all buffers and resets frame counter
  void Reset(bool keep_buffer_data); 
  // Constructors and destructors just allocate and deallocate field members
};
