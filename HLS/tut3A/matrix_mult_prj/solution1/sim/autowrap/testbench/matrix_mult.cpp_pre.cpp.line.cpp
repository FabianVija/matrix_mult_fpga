#pragma line 1 "/home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/usr/include/stdc-predef.h" 1 3 4
#pragma line 1 "<command-line>" 2
#pragma line 1 "/home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult.cpp"
#pragma empty_line
#pragma line 1 "/home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 1 3
#pragma line 39 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
#pragma empty_line
#pragma line 40 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 1 3
#pragma line 196 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
#pragma empty_line
#pragma line 196 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;
#pragma empty_line
#pragma empty_line
  typedef decltype(nullptr) nullptr_t;
#pragma empty_line
}
#pragma line 218 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
#pragma line 495 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 1 3
#pragma line 39 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 3
#pragma line 1 "/usr/include/features.h" 1 3 4
#pragma line 367 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
#pragma line 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
#pragma line 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
#pragma line 368 "/usr/include/features.h" 2 3 4
#pragma line 391 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
#pragma line 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
#pragma line 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
#pragma line 392 "/usr/include/features.h" 2 3 4
#pragma line 40 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 2 3
#pragma line 496 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/cpu_defines.h" 1 3
#pragma line 499 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3
#pragma line 42 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 1 3
#pragma line 35 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
#pragma empty_line
#pragma line 36 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
#pragma line 67 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
extern "C++" {
#pragma empty_line
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
  struct __true_type { };
  struct __false_type { };
#pragma empty_line
  template<bool>
    struct __truth_type
    { typedef __false_type __type; };
#pragma empty_line
  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma line 261 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer<__int128> { enum { __value = 1 }; typedef __true_type __type; }; template<> struct __is_integer<unsigned __int128> { enum { __value = 1 }; typedef __true_type __type; };
#pragma line 278 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    { return __it; }
#pragma empty_line
#pragma empty_line
}
}
#pragma line 43 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/ext/type_traits.h" 1 3
#pragma line 32 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/ext/type_traits.h" 3
#pragma empty_line
#pragma line 33 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/ext/type_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C++" {
#pragma empty_line
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool, typename>
    struct __enable_if
    { };
#pragma empty_line
  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };
#pragma empty_line
  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };
#pragma empty_line
#pragma empty_line
  template<>
    struct __add_unsigned<bool>;
#pragma empty_line
  template<>
    struct __add_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };
#pragma empty_line
#pragma empty_line
  template<>
    struct __remove_unsigned<bool>;
#pragma empty_line
  template<>
    struct __remove_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
#pragma empty_line
#pragma empty_line
  inline bool
  __is_null_pointer(std::nullptr_t)
  { return true; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __promote<_Tp, false>
    { };
#pragma empty_line
  template<>
    struct __promote<long double>
    { typedef long double __type; };
#pragma empty_line
  template<>
    struct __promote<double>
    { typedef double __type; };
#pragma empty_line
  template<>
    struct __promote<float>
    { typedef float __type; };
#pragma empty_line
  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };
#pragma empty_line
#pragma empty_line
}
}
#pragma line 44 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma empty_line
#pragma line 1 "/usr/include/math.h" 1 3 4
#pragma line 28 "/usr/include/math.h" 3 4
extern "C" {
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
#pragma line 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
#pragma line 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
#pragma line 32 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
#pragma line 36 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
#pragma line 38 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
#pragma line 39 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
#pragma line 42 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
#pragma line 45 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
#pragma line 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
#pragma line 49 "/usr/include/math.h" 2 3 4
#pragma line 83 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#pragma empty_line
#pragma empty_line
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();
#pragma empty_line
extern double asin (double __x) throw (); extern double __asin (double __x) throw ();
#pragma empty_line
extern double atan (double __x) throw (); extern double __atan (double __x) throw ();
#pragma empty_line
extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();
#pragma empty_line
#pragma empty_line
 extern double cos (double __x) throw (); extern double __cos (double __x) throw ();
#pragma empty_line
 extern double sin (double __x) throw (); extern double __sin (double __x) throw ();
#pragma empty_line
extern double tan (double __x) throw (); extern double __tan (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();
#pragma empty_line
extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();
#pragma empty_line
extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();
#pragma empty_line
extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();
#pragma empty_line
extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern double exp (double __x) throw (); extern double __exp (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern double log (double __x) throw (); extern double __log (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();
#pragma empty_line
extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double logb (double __x) throw (); extern double __logb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isinf (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __finite (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma line 208 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int finite (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double significand (double __x) throw (); extern double __significand (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isnan (double __value) throw () __attribute__ ((__const__));
#pragma line 247 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double tgamma (double) throw (); extern double __tgamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double gamma (double) throw (); extern double __gamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double rint (double __x) throw (); extern double __rint (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
#pragma line 84 "/usr/include/math.h" 2 3 4
#pragma line 104 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#pragma empty_line
#pragma empty_line
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();
#pragma empty_line
extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();
#pragma empty_line
extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();
#pragma empty_line
extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();
#pragma empty_line
#pragma empty_line
 extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();
#pragma empty_line
 extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();
#pragma empty_line
extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();
#pragma empty_line
extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();
#pragma empty_line
extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();
#pragma empty_line
extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();
#pragma empty_line
extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern float expf (float __x) throw (); extern float __expf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern float logf (float __x) throw (); extern float __logf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();
#pragma empty_line
extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isinff (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __finitef (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int isinff (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int finitef (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isnanf (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int isnanf (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float gammaf (float) throw (); extern float __gammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
#pragma line 105 "/usr/include/math.h" 2 3 4
#pragma line 151 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#pragma empty_line
#pragma empty_line
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();
#pragma empty_line
extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();
#pragma empty_line
extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();
#pragma empty_line
extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();
#pragma empty_line
#pragma empty_line
 extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();
#pragma empty_line
 extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();
#pragma empty_line
extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();
#pragma empty_line
extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();
#pragma empty_line
extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();
#pragma empty_line
extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();
#pragma empty_line
extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();
#pragma empty_line
extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isinfl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __finitel (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int isinfl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int finitel (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isnanl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int isnanl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
#pragma line 152 "/usr/include/math.h" 2 3 4
#pragma line 168 "/usr/include/math.h" 3 4
extern int signgam;
#pragma line 209 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =
#pragma empty_line
      0,
    FP_INFINITE =
#pragma empty_line
      1,
    FP_ZERO =
#pragma empty_line
      2,
    FP_SUBNORMAL =
#pragma empty_line
      3,
    FP_NORMAL =
#pragma empty_line
      4
  };
#pragma line 347 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _LIB_VERSION_TYPE _LIB_VERSION;
#pragma line 370 "/usr/include/math.h" 3 4
struct __exception
#pragma empty_line
#pragma empty_line
#pragma empty_line
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };
#pragma empty_line
#pragma empty_line
extern int matherr (struct __exception *__exc) throw ();
#pragma line 534 "/usr/include/math.h" 3 4
}
#pragma line 46 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma line 77 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
extern "C++"
{
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline constexpr double
  abs(double __x)
  { return __builtin_fabs(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline constexpr float
  abs(float __x)
  { return __builtin_fabsf(__x); }
#pragma empty_line
  inline constexpr long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }
#pragma empty_line
  using ::acos;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  acos(float __x)
  { return __builtin_acosf(__x); }
#pragma empty_line
  inline constexpr long double
  acos(long double __x)
  { return __builtin_acosl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }
#pragma empty_line
  using ::asin;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  asin(float __x)
  { return __builtin_asinf(__x); }
#pragma empty_line
  inline constexpr long double
  asin(long double __x)
  { return __builtin_asinl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }
#pragma empty_line
  using ::atan;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  atan(float __x)
  { return __builtin_atanf(__x); }
#pragma empty_line
  inline constexpr long double
  atan(long double __x)
  { return __builtin_atanl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }
#pragma empty_line
  using ::atan2;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }
#pragma empty_line
  inline constexpr long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }
#pragma empty_line
  using ::ceil;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  ceil(float __x)
  { return __builtin_ceilf(__x); }
#pragma empty_line
  inline constexpr long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }
#pragma empty_line
  using ::cos;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  cos(float __x)
  { return __builtin_cosf(__x); }
#pragma empty_line
  inline constexpr long double
  cos(long double __x)
  { return __builtin_cosl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }
#pragma empty_line
  using ::cosh;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  cosh(float __x)
  { return __builtin_coshf(__x); }
#pragma empty_line
  inline constexpr long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }
#pragma empty_line
  using ::exp;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  exp(float __x)
  { return __builtin_expf(__x); }
#pragma empty_line
  inline constexpr long double
  exp(long double __x)
  { return __builtin_expl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }
#pragma empty_line
  using ::fabs;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  fabs(float __x)
  { return __builtin_fabsf(__x); }
#pragma empty_line
  inline constexpr long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }
#pragma empty_line
  using ::floor;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  floor(float __x)
  { return __builtin_floorf(__x); }
#pragma empty_line
  inline constexpr long double
  floor(long double __x)
  { return __builtin_floorl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }
#pragma empty_line
  using ::fmod;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }
#pragma empty_line
  inline constexpr long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmod(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmod(__type(__x), __type(__y));
    }
#pragma empty_line
  using ::frexp;
#pragma empty_line
#pragma empty_line
  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }
#pragma empty_line
  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }
#pragma empty_line
  using ::ldexp;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }
#pragma empty_line
  inline constexpr long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ldexp(_Tp __x, int __exp)
    { return __builtin_ldexp(__x, __exp); }
#pragma empty_line
  using ::log;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  log(float __x)
  { return __builtin_logf(__x); }
#pragma empty_line
  inline constexpr long double
  log(long double __x)
  { return __builtin_logl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }
#pragma empty_line
  using ::log10;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  log10(float __x)
  { return __builtin_log10f(__x); }
#pragma empty_line
  inline constexpr long double
  log10(long double __x)
  { return __builtin_log10l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }
#pragma empty_line
  using ::modf;
#pragma empty_line
#pragma empty_line
  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }
#pragma empty_line
  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }
#pragma empty_line
#pragma empty_line
  using ::pow;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }
#pragma empty_line
  inline constexpr long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }
#pragma line 435 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }
#pragma empty_line
  using ::sin;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  sin(float __x)
  { return __builtin_sinf(__x); }
#pragma empty_line
  inline constexpr long double
  sin(long double __x)
  { return __builtin_sinl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }
#pragma empty_line
  using ::sinh;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  sinh(float __x)
  { return __builtin_sinhf(__x); }
#pragma empty_line
  inline constexpr long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }
#pragma empty_line
  using ::sqrt;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }
#pragma empty_line
  inline constexpr long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }
#pragma empty_line
  using ::tan;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  tan(float __x)
  { return __builtin_tanf(__x); }
#pragma empty_line
  inline constexpr long double
  tan(long double __x)
  { return __builtin_tanl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }
#pragma empty_line
  using ::tanh;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  tanh(float __x)
  { return __builtin_tanhf(__x); }
#pragma empty_line
  inline constexpr long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }
#pragma empty_line
#pragma empty_line
}
#pragma line 559 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr int
  fpclassify(float __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
#pragma empty_line
  constexpr int
  fpclassify(double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
#pragma empty_line
  constexpr int
  fpclassify(long double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              int>::__type
    fpclassify(_Tp __x)
    { return __x != 0 ? 4 : 2; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isfinite(float __x)
  { return __builtin_isfinite(__x); }
#pragma empty_line
  constexpr bool
  isfinite(double __x)
  { return __builtin_isfinite(__x); }
#pragma empty_line
  constexpr bool
  isfinite(long double __x)
  { return __builtin_isfinite(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isfinite(_Tp __x)
    { return true; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isinf(float __x)
  { return __builtin_isinf(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr bool
  isinf(double __x)
  { return __builtin_isinf(__x); }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isinf(long double __x)
  { return __builtin_isinf(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isinf(_Tp __x)
    { return false; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnan(float __x)
  { return __builtin_isnan(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnan(double __x)
  { return __builtin_isnan(__x); }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnan(long double __x)
  { return __builtin_isnan(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnan(_Tp __x)
    { return false; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnormal(float __x)
  { return __builtin_isnormal(__x); }
#pragma empty_line
  constexpr bool
  isnormal(double __x)
  { return __builtin_isnormal(__x); }
#pragma empty_line
  constexpr bool
  isnormal(long double __x)
  { return __builtin_isnormal(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnormal(_Tp __x)
    { return __x != 0 ? true : false; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr bool
  signbit(float __x)
  { return __builtin_signbit(__x); }
#pragma empty_line
  constexpr bool
  signbit(double __x)
  { return __builtin_signbit(__x); }
#pragma empty_line
  constexpr bool
  signbit(long double __x)
  { return __builtin_signbit(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    signbit(_Tp __x)
    { return __x < 0 ? true : false; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isgreater(float __x, float __y)
  { return __builtin_isgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreater(double __x, double __y)
  { return __builtin_isgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreater(long double __x, long double __y)
  { return __builtin_isgreater(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreater(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isgreaterequal(float __x, float __y)
  { return __builtin_isgreaterequal(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreaterequal(double __x, double __y)
  { return __builtin_isgreaterequal(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreaterequal(long double __x, long double __y)
  { return __builtin_isgreaterequal(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreaterequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreaterequal(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isless(float __x, float __y)
  { return __builtin_isless(__x, __y); }
#pragma empty_line
  constexpr bool
  isless(double __x, double __y)
  { return __builtin_isless(__x, __y); }
#pragma empty_line
  constexpr bool
  isless(long double __x, long double __y)
  { return __builtin_isless(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isless(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isless(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  islessequal(float __x, float __y)
  { return __builtin_islessequal(__x, __y); }
#pragma empty_line
  constexpr bool
  islessequal(double __x, double __y)
  { return __builtin_islessequal(__x, __y); }
#pragma empty_line
  constexpr bool
  islessequal(long double __x, long double __y)
  { return __builtin_islessequal(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessequal(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  islessgreater(float __x, float __y)
  { return __builtin_islessgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  islessgreater(double __x, double __y)
  { return __builtin_islessgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  islessgreater(long double __x, long double __y)
  { return __builtin_islessgreater(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessgreater(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isunordered(float __x, float __y)
  { return __builtin_isunordered(__x, __y); }
#pragma empty_line
  constexpr bool
  isunordered(double __x, double __y)
  { return __builtin_isunordered(__x, __y); }
#pragma empty_line
  constexpr bool
  isunordered(long double __x, long double __y)
  { return __builtin_isunordered(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isunordered(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isunordered(__type(__x), __type(__y));
    }
#pragma line 956 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
#pragma empty_line
}
#pragma line 1072 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  using ::double_t;
  using ::float_t;
#pragma empty_line
#pragma empty_line
  using ::acosh;
  using ::acoshf;
  using ::acoshl;
#pragma empty_line
  using ::asinh;
  using ::asinhf;
  using ::asinhl;
#pragma empty_line
  using ::atanh;
  using ::atanhf;
  using ::atanhl;
#pragma empty_line
  using ::cbrt;
  using ::cbrtf;
  using ::cbrtl;
#pragma empty_line
  using ::copysign;
  using ::copysignf;
  using ::copysignl;
#pragma empty_line
  using ::erf;
  using ::erff;
  using ::erfl;
#pragma empty_line
  using ::erfc;
  using ::erfcf;
  using ::erfcl;
#pragma empty_line
  using ::exp2;
  using ::exp2f;
  using ::exp2l;
#pragma empty_line
  using ::expm1;
  using ::expm1f;
  using ::expm1l;
#pragma empty_line
  using ::fdim;
  using ::fdimf;
  using ::fdiml;
#pragma empty_line
  using ::fma;
  using ::fmaf;
  using ::fmal;
#pragma empty_line
  using ::fmax;
  using ::fmaxf;
  using ::fmaxl;
#pragma empty_line
  using ::fmin;
  using ::fminf;
  using ::fminl;
#pragma empty_line
  using ::hypot;
  using ::hypotf;
  using ::hypotl;
#pragma empty_line
  using ::ilogb;
  using ::ilogbf;
  using ::ilogbl;
#pragma empty_line
  using ::lgamma;
  using ::lgammaf;
  using ::lgammal;
#pragma empty_line
  using ::llrint;
  using ::llrintf;
  using ::llrintl;
#pragma empty_line
  using ::llround;
  using ::llroundf;
  using ::llroundl;
#pragma empty_line
  using ::log1p;
  using ::log1pf;
  using ::log1pl;
#pragma empty_line
  using ::log2;
  using ::log2f;
  using ::log2l;
#pragma empty_line
  using ::logb;
  using ::logbf;
  using ::logbl;
#pragma empty_line
  using ::lrint;
  using ::lrintf;
  using ::lrintl;
#pragma empty_line
  using ::lround;
  using ::lroundf;
  using ::lroundl;
#pragma empty_line
  using ::nan;
  using ::nanf;
  using ::nanl;
#pragma empty_line
  using ::nearbyint;
  using ::nearbyintf;
  using ::nearbyintl;
#pragma empty_line
  using ::nextafter;
  using ::nextafterf;
  using ::nextafterl;
#pragma empty_line
  using ::nexttoward;
  using ::nexttowardf;
  using ::nexttowardl;
#pragma empty_line
  using ::remainder;
  using ::remainderf;
  using ::remainderl;
#pragma empty_line
  using ::remquo;
  using ::remquof;
  using ::remquol;
#pragma empty_line
  using ::rint;
  using ::rintf;
  using ::rintl;
#pragma empty_line
  using ::round;
  using ::roundf;
  using ::roundl;
#pragma empty_line
  using ::scalbln;
  using ::scalblnf;
  using ::scalblnl;
#pragma empty_line
  using ::scalbn;
  using ::scalbnf;
  using ::scalbnl;
#pragma empty_line
  using ::tgamma;
  using ::tgammaf;
  using ::tgammal;
#pragma empty_line
  using ::trunc;
  using ::truncf;
  using ::truncl;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr float
  acosh(float __x)
  { return __builtin_acoshf(__x); }
#pragma empty_line
  constexpr long double
  acosh(long double __x)
  { return __builtin_acoshl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    acosh(_Tp __x)
    { return __builtin_acosh(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  asinh(float __x)
  { return __builtin_asinhf(__x); }
#pragma empty_line
  constexpr long double
  asinh(long double __x)
  { return __builtin_asinhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    asinh(_Tp __x)
    { return __builtin_asinh(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  atanh(float __x)
  { return __builtin_atanhf(__x); }
#pragma empty_line
  constexpr long double
  atanh(long double __x)
  { return __builtin_atanhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    atanh(_Tp __x)
    { return __builtin_atanh(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  cbrt(float __x)
  { return __builtin_cbrtf(__x); }
#pragma empty_line
  constexpr long double
  cbrt(long double __x)
  { return __builtin_cbrtl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    cbrt(_Tp __x)
    { return __builtin_cbrt(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  copysign(float __x, float __y)
  { return __builtin_copysignf(__x, __y); }
#pragma empty_line
  constexpr long double
  copysign(long double __x, long double __y)
  { return __builtin_copysignl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    copysign(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return copysign(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  erf(float __x)
  { return __builtin_erff(__x); }
#pragma empty_line
  constexpr long double
  erf(long double __x)
  { return __builtin_erfl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erf(_Tp __x)
    { return __builtin_erf(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  erfc(float __x)
  { return __builtin_erfcf(__x); }
#pragma empty_line
  constexpr long double
  erfc(long double __x)
  { return __builtin_erfcl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erfc(_Tp __x)
    { return __builtin_erfc(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  exp2(float __x)
  { return __builtin_exp2f(__x); }
#pragma empty_line
  constexpr long double
  exp2(long double __x)
  { return __builtin_exp2l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    exp2(_Tp __x)
    { return __builtin_exp2(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  expm1(float __x)
  { return __builtin_expm1f(__x); }
#pragma empty_line
  constexpr long double
  expm1(long double __x)
  { return __builtin_expm1l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    expm1(_Tp __x)
    { return __builtin_expm1(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  fdim(float __x, float __y)
  { return __builtin_fdimf(__x, __y); }
#pragma empty_line
  constexpr long double
  fdim(long double __x, long double __y)
  { return __builtin_fdiml(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fdim(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fdim(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  fma(float __x, float __y, float __z)
  { return __builtin_fmaf(__x, __y, __z); }
#pragma empty_line
  constexpr long double
  fma(long double __x, long double __y, long double __z)
  { return __builtin_fmal(__x, __y, __z); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp>
    constexpr typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type
    fma(_Tp __x, _Up __y, _Vp __z)
    {
      typedef typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type __type;
      return fma(__type(__x), __type(__y), __type(__z));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  fmax(float __x, float __y)
  { return __builtin_fmaxf(__x, __y); }
#pragma empty_line
  constexpr long double
  fmax(long double __x, long double __y)
  { return __builtin_fmaxl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmax(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmax(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  fmin(float __x, float __y)
  { return __builtin_fminf(__x, __y); }
#pragma empty_line
  constexpr long double
  fmin(long double __x, long double __y)
  { return __builtin_fminl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmin(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmin(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  hypot(float __x, float __y)
  { return __builtin_hypotf(__x, __y); }
#pragma empty_line
  constexpr long double
  hypot(long double __x, long double __y)
  { return __builtin_hypotl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    hypot(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return hypot(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr int
  ilogb(float __x)
  { return __builtin_ilogbf(__x); }
#pragma empty_line
  constexpr int
  ilogb(long double __x)
  { return __builtin_ilogbl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    int>::__type
    ilogb(_Tp __x)
    { return __builtin_ilogb(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  lgamma(float __x)
  { return __builtin_lgammaf(__x); }
#pragma empty_line
  constexpr long double
  lgamma(long double __x)
  { return __builtin_lgammal(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    lgamma(_Tp __x)
    { return __builtin_lgamma(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long long
  llrint(float __x)
  { return __builtin_llrintf(__x); }
#pragma empty_line
  constexpr long long
  llrint(long double __x)
  { return __builtin_llrintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llrint(_Tp __x)
    { return __builtin_llrint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long long
  llround(float __x)
  { return __builtin_llroundf(__x); }
#pragma empty_line
  constexpr long long
  llround(long double __x)
  { return __builtin_llroundl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llround(_Tp __x)
    { return __builtin_llround(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  log1p(float __x)
  { return __builtin_log1pf(__x); }
#pragma empty_line
  constexpr long double
  log1p(long double __x)
  { return __builtin_log1pl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log1p(_Tp __x)
    { return __builtin_log1p(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr float
  log2(float __x)
  { return __builtin_log2f(__x); }
#pragma empty_line
  constexpr long double
  log2(long double __x)
  { return __builtin_log2l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log2(_Tp __x)
    { return __builtin_log2(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  logb(float __x)
  { return __builtin_logbf(__x); }
#pragma empty_line
  constexpr long double
  logb(long double __x)
  { return __builtin_logbl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    logb(_Tp __x)
    { return __builtin_logb(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long
  lrint(float __x)
  { return __builtin_lrintf(__x); }
#pragma empty_line
  constexpr long
  lrint(long double __x)
  { return __builtin_lrintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lrint(_Tp __x)
    { return __builtin_lrint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long
  lround(float __x)
  { return __builtin_lroundf(__x); }
#pragma empty_line
  constexpr long
  lround(long double __x)
  { return __builtin_lroundl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lround(_Tp __x)
    { return __builtin_lround(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  nearbyint(float __x)
  { return __builtin_nearbyintf(__x); }
#pragma empty_line
  constexpr long double
  nearbyint(long double __x)
  { return __builtin_nearbyintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nearbyint(_Tp __x)
    { return __builtin_nearbyint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  nextafter(float __x, float __y)
  { return __builtin_nextafterf(__x, __y); }
#pragma empty_line
  constexpr long double
  nextafter(long double __x, long double __y)
  { return __builtin_nextafterl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    nextafter(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return nextafter(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  nexttoward(float __x, long double __y)
  { return __builtin_nexttowardf(__x, __y); }
#pragma empty_line
  constexpr long double
  nexttoward(long double __x, long double __y)
  { return __builtin_nexttowardl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nexttoward(_Tp __x, long double __y)
    { return __builtin_nexttoward(__x, __y); }
#pragma empty_line
#pragma empty_line
  constexpr float
  remainder(float __x, float __y)
  { return __builtin_remainderf(__x, __y); }
#pragma empty_line
  constexpr long double
  remainder(long double __x, long double __y)
  { return __builtin_remainderl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remainder(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remainder(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  inline float
  remquo(float __x, float __y, int* __pquo)
  { return __builtin_remquof(__x, __y, __pquo); }
#pragma empty_line
  inline long double
  remquo(long double __x, long double __y, int* __pquo)
  { return __builtin_remquol(__x, __y, __pquo); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remquo(_Tp __x, _Up __y, int* __pquo)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remquo(__type(__x), __type(__y), __pquo);
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  rint(float __x)
  { return __builtin_rintf(__x); }
#pragma empty_line
  constexpr long double
  rint(long double __x)
  { return __builtin_rintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    rint(_Tp __x)
    { return __builtin_rint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  round(float __x)
  { return __builtin_roundf(__x); }
#pragma empty_line
  constexpr long double
  round(long double __x)
  { return __builtin_roundl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    round(_Tp __x)
    { return __builtin_round(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  scalbln(float __x, long __ex)
  { return __builtin_scalblnf(__x, __ex); }
#pragma empty_line
  constexpr long double
  scalbln(long double __x, long __ex)
  { return __builtin_scalblnl(__x, __ex); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbln(_Tp __x, long __ex)
    { return __builtin_scalbln(__x, __ex); }
#pragma empty_line
#pragma empty_line
  constexpr float
  scalbn(float __x, int __ex)
  { return __builtin_scalbnf(__x, __ex); }
#pragma empty_line
  constexpr long double
  scalbn(long double __x, int __ex)
  { return __builtin_scalbnl(__x, __ex); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbn(_Tp __x, int __ex)
    { return __builtin_scalbn(__x, __ex); }
#pragma empty_line
#pragma empty_line
  constexpr float
  tgamma(float __x)
  { return __builtin_tgammaf(__x); }
#pragma empty_line
  constexpr long double
  tgamma(long double __x)
  { return __builtin_tgammal(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    tgamma(_Tp __x)
    { return __builtin_tgamma(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  trunc(float __x)
  { return __builtin_truncf(__x); }
#pragma empty_line
  constexpr long double
  trunc(long double __x)
  { return __builtin_truncl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    trunc(_Tp __x)
    { return __builtin_trunc(__x); }
#pragma empty_line
#pragma empty_line
}
#pragma line 1797 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
}
#pragma line 5 "/home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult.h" 2
#pragma empty_line
#pragma line 5 "/home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult.h"
using namespace std;
#pragma line 15 "/home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult.h"
typedef char mat_a;
typedef char mat_b;
typedef short mat_prod;
#pragma empty_line
#pragma empty_line
void matrix_mult(
      mat_a a[5][5],
      mat_b b[5][5],
      mat_prod prod[5][5]);
#pragma line 3 "/home/fabian/Documents/ensta/deuxieme/sys_elec_embar/Zynq_Book/HLS/tut3A/matrix_mult.cpp" 2
#pragma empty_line
void matrix_mult(
      mat_a a[5][5],
      mat_b b[5][5],
      mat_prod prod[5][5])
{
#pragma empty_line
   Row: for(int i = 0; i < 5; i++) {
#pragma empty_line
      Col: for(int j = 0; j < 5; j++) {
         prod[i][j] = 0;
#pragma empty_line
         Product: for(int k = 0; k < 5; k++) {
            prod[i][j] += a[i][k] * b[k][j];
         }
      }
   }
#pragma empty_line
}