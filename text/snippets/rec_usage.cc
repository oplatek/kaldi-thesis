OnlineLatgenRecogniser rec;
rec.Setup(...); 

size_t decoded_now = 0; 
size_t max_decoded = 10; 
char *audio_array = NULL;

while (recognitionOn())
{
  size_t audio_len = getAudio(audio_array);
  rec.AudioIn(audio_array, audio_len);
  do {
    decoded_now = rec.Decode(max_decoded);
  } while(decoded_now > 0);
}
rec.PruneFinal();

double tot_lik; 
fst::VectorFst<fst::LogArc> word_post_lat;
rec.GetLattice(&word_post_lat, &tot_lik);

rec.Reset();
