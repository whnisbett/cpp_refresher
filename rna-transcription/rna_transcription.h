#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <string>
#include <unordered_map>

namespace rna_transcription {

    char to_rna(char dna_nucleotide);
    std::string to_rna(std::string dna_sequence);

}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H