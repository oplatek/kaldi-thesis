double CompactLatticeToWordsPost(CompactLattice &clat,
                                fst::VectorFst<fst::LogArc> *pst) {
  {
    Lattice lat;
    fst::VectorFst<fst::StdArc> t_std;
    RemoveAlignmentsFromCompactLattice(&clat); // remove the alignments
    ConvertLattice(clat, &lat); // convert to non-compact form.. no new states
    ConvertLattice(lat, &t_std); // this adds up the (lm,acoustic) costs
    fst::Cast(t_std, pst);  // reinterpret the inner implementations
  }
  fst::Project(pst, fst::PROJECT_OUTPUT);
  fst::Minimize(pst);
  fst::ArcMap(pst, fst::SuperFinalMapper<fst::LogArc>());
  fst::TopSort(pst);
  std::vector<double> alpha, beta;
  double tot_lik = ComputeLatticeAlphasAndBetas(*pst, &alpha, &beta);
  MovePostToArcs(pst, alpha, beta);
  return tot_lik;
}
