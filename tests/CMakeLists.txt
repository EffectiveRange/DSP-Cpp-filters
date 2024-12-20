include(GoogleTest)
include(Dart)

# fo_apf
add_executable(fo_apf_test fo_apf_test.cpp)
target_link_libraries(fo_apf_test dsp-filters  GTest::gtest_main)

# fo_hpf
add_executable(fo_hpf_test fo_hpf_test.cpp)
target_link_libraries(fo_hpf_test dsp-filters  GTest::gtest_main)

# fo_lpf
add_executable(fo_lpf_test fo_lpf_test.cpp)
target_link_libraries(fo_lpf_test dsp-filters  GTest::gtest_main)

# fo_shelving_high
add_executable(fo_shelving_high_test fo_shelving_high_test.cpp)
target_link_libraries(fo_shelving_high_test dsp-filters  GTest::gtest_main)

# fo_shelving_low
add_executable(fo_shelving_low_test fo_shelving_low_test.cpp)
target_link_libraries(fo_shelving_low_test dsp-filters  GTest::gtest_main)

# so_apf
add_executable(so_apf_test so_apf_test.cpp)
target_link_libraries(so_apf_test dsp-filters  GTest::gtest_main)

# so_hpf
add_executable(so_hpf_test so_hpf_test.cpp)
target_link_libraries(so_hpf_test dsp-filters  GTest::gtest_main)

# so_lpf
add_executable(so_lpf_test so_lpf_test.cpp)
target_link_libraries(so_lpf_test dsp-filters  GTest::gtest_main)

# so_bpf
add_executable(so_bpf_test so_bpf_test.cpp)
target_link_libraries(so_bpf_test dsp-filters  GTest::gtest_main)

# so_bsf
add_executable(so_bsf_test so_bsf_test.cpp)
target_link_libraries(so_bsf_test dsp-filters  GTest::gtest_main)

# so_butterworth_bpf
add_executable(so_butterworth_bpf_test so_butterworth_bpf_test.cpp)
target_link_libraries(so_butterworth_bpf_test dsp-filters  GTest::gtest_main)

# so_butterworth_bsf
add_executable(so_butterworth_bsf_test so_butterworth_bsf_test.cpp)
target_link_libraries(so_butterworth_bsf_test dsp-filters  GTest::gtest_main)

# so_butterworth_hpf
add_executable(so_butterworth_hpf_test so_butterworth_hpf_test.cpp)
target_link_libraries(so_butterworth_hpf_test dsp-filters  GTest::gtest_main)

# so_butterworth_lpf
add_executable(so_butterworth_lpf_test so_butterworth_lpf_test.cpp)
target_link_libraries(so_butterworth_lpf_test dsp-filters  GTest::gtest_main)

# so_linkwitz_riley_hpf
add_executable(so_linkwitz_riley_hpf_test so_linkwitz_riley_hpf_test.cpp)
target_link_libraries(so_linkwitz_riley_hpf_test dsp-filters  GTest::gtest_main)

# so_linkwitz_riley_lpf
add_executable(so_linkwitz_riley_lpf_test so_linkwitz_riley_lpf_test.cpp)
target_link_libraries(so_linkwitz_riley_lpf_test dsp-filters  GTest::gtest_main)

# so_parametric_cq_boost
add_executable(so_parametric_cq_boost_test so_parametric_cq_boost_test.cpp)
target_link_libraries(so_parametric_cq_boost_test dsp-filters  GTest::gtest_main)

# so_parametric_cq_cut
add_executable(so_parametric_cq_cut_test so_parametric_cq_cut_test.cpp)
target_link_libraries(so_parametric_cq_cut_test dsp-filters  GTest::gtest_main)

# so_parametric_ncq
add_executable(so_parametric_ncq_test so_parametric_ncq_test.cpp)
target_link_libraries(so_parametric_ncq_test dsp-filters  GTest::gtest_main)

gtest_discover_tests(fo_apf_test)
gtest_discover_tests(fo_hpf_test)
gtest_discover_tests(fo_lpf_test)
gtest_discover_tests(fo_shelving_high_test)
gtest_discover_tests(fo_shelving_low_test)
gtest_discover_tests(so_apf_test)
gtest_discover_tests(so_hpf_test)
gtest_discover_tests(so_lpf_test)
gtest_discover_tests(so_bpf_test)
gtest_discover_tests(so_bsf_test)
gtest_discover_tests(so_butterworth_bpf_test)
gtest_discover_tests(so_butterworth_bsf_test)
gtest_discover_tests(so_butterworth_hpf_test)
gtest_discover_tests(so_butterworth_lpf_test)
gtest_discover_tests(so_linkwitz_riley_hpf_test)
gtest_discover_tests(so_linkwitz_riley_lpf_test)
gtest_discover_tests(so_parametric_cq_boost_test)
gtest_discover_tests(so_parametric_cq_cut_test)
gtest_discover_tests(so_parametric_ncq_test)
