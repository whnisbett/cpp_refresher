#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <string>
#include <map>
#include <stdexcept>

namespace nucleotide_count {

    std::map<char, int> count(std::string dna_strand);
    void assert_is_valid_dna_strand(std::string dna_strand);
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H