///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Function.hh
// Copyright   :  (c) Andy Arvanitis 2015
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Function FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Data_Function_Uncurried_FFI_HH
#define Data_Function_Uncurried_FFI_HH

#include "PureScript/PureScript.hh"

//-----------------------------------------------------------------------------
// NOTE: These are not really useful for the C++ backend, so they are
//       currently just pass-throughs.
//-----------------------------------------------------------------------------

namespace Data_Function_Uncurried {
  using namespace PureScript;

  //---------------------------------------------------------------------------

  inline auto mkFn0(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn1(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn2(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn3(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn4(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn5(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn6(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn7(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn8(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn9(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn10(const any& fn) -> any {
    return fn;
  }

  //---------------------------------------------------------------------------

  inline auto runFn0(const any& fn) -> any {
    return fn(undefined);
  }

  inline auto runFn1(const any& fn, const any& a) -> any {
    return fn(a);
  }

  template <typename F, typename ... Args>
  inline auto runFn2(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn2(const F& fn, const any& a, const any& b) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b);
  }

  template <typename F, typename ... Args>
  inline auto runFn3(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn3(const F& fn, const any& a, const any& b, const any& c) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c);
  }

  template <typename F, typename ... Args>
  inline auto runFn4(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn4(const F& fn, const any& a, const any& b, const any& c, const any& d) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c)(d);
  }

  template <typename F, typename ... Args>
  inline auto runFn5(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn5(const F& fn, const any& a, const any& b, const any& c, const any& d, const any& e) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c)(d)(e);
  }

  template <typename F, typename ... Args>
  inline auto runFn6(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn6(const F& fn, const any& a, const any& b, const any& c, const any& d, const any& e, const any& f) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c)(d)(e)(f);
  }

  template <typename F, typename ... Args>
  inline auto runFn7(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn7(const F& fn, const any& a, const any& b, const any& c, const any& d, const any& e,
                                     const any& f, const any& g) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c)(d)(e)(f)(g);
  }

  template <typename F, typename ... Args>
  inline auto runFn8(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn8(const F& fn, const any& a, const any& b, const any& c, const any& d, const any& e,
                                  const any& f, const any& g, const any& h) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c)(d)(e)(f)(g)(h);
  }

  template <typename F, typename ... Args>
  inline auto runFn9(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn9(const F& fn, const any& a, const any& b, const any& c, const any& d, const any& e,
                                  const any& f, const any& g, const any& h, const any& i) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c)(d)(e)(f)(g)(h)(i);
  }

  template <typename F, typename ... Args>
  inline auto runFn10(F&& fn, Args&&...args) ->
      typename std::enable_if<!std::is_convertible<F,any>::value,
                              typename std::result_of<F(Args...)>::type>::type {
    return fn(std::forward<Args>(args)...);
  }

  template <typename F>
  inline auto runFn10(const F& fn, const any& a, const any& b, const any& c, const any& d, const any& e,
                                   const any& f, const any& g, const any& h, const any& i, const any& j) ->
      typename std::enable_if<std::is_convertible<F,any>::value, any>::type {
    return fn(a)(b)(c)(d)(e)(f)(g)(h)(i)(j);
  }

  //---------------------------------------------------------------------------

  // inline auto runFn0(const any& fn) -> any {
  //   return fn(undefined);
  // }
  //
  // inline auto runFn1(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return fn(a);
  //   };
  // }
  //
  // inline auto runFn2(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return fn(a)(b);
  //     };
  //   };
  // }
  //
  // inline auto runFn3(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return fn(a)(b)(c);
  //       };
  //     };
  //   };
  // }
  //
  // inline auto runFn4(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return [=](const any& d) -> any {
  //           return fn(a)(b)(c)(d);
  //         };
  //       };
  //     };
  //   };
  // }
  //
  // inline auto runFn5(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return [=](const any& d) -> any {
  //           return [=](const any& e) -> any {
  //             return fn(a)(b)(c)(d)(e);
  //           };
  //         };
  //       };
  //     };
  //   };
  // }
  //
  // inline auto runFn6(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return [=](const any& d) -> any {
  //           return [=](const any& e) -> any {
  //             return [=](const any& f) -> any {
  //               return fn(a)(b)(c)(d)(e)(f);
  //             };
  //           };
  //         };
  //       };
  //     };
  //   };
  // }
  //
  // inline auto runFn7(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return [=](const any& d) -> any {
  //           return [=](const any& e) -> any {
  //             return [=](const any& f) -> any {
  //               return [=](const any& g) -> any {
  //                 return fn(a)(b)(c)(d)(e)(f)(g);
  //               };
  //             };
  //           };
  //         };
  //       };
  //     };
  //   };
  // }
  //
  // inline auto runFn8(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return [=](const any& d) -> any {
  //           return [=](const any& e) -> any {
  //             return [=](const any& f) -> any {
  //               return [=](const any& g) -> any {
  //                 return [=](const any& h) -> any {
  //                   return fn(a)(b)(c)(d)(e)(f)(g)(h);
  //                 };
  //               };
  //             };
  //           };
  //         };
  //       };
  //     };
  //   };
  // }
  //
  // inline auto runFn9(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return [=](const any& d) -> any {
  //           return [=](const any& e) -> any {
  //             return [=](const any& f) -> any {
  //               return [=](const any& g) -> any {
  //                 return [=](const any& h) -> any {
  //                   return [=](const any& i) -> any {
  //                     return fn(a)(b)(c)(d)(e)(f)(g)(h)(i);
  //                   };
  //                 };
  //               };
  //             };
  //           };
  //         };
  //       };
  //     };
  //   };
  // }
  //
  // inline auto runFn10(const any& fn) -> any {
  //   return [=](const any& a) -> any {
  //     return [=](const any& b) -> any {
  //       return [=](const any& c) -> any {
  //         return [=](const any& d) -> any {
  //           return [=](const any& e) -> any {
  //             return [=](const any& f) -> any {
  //               return [=](const any& g) -> any {
  //                 return [=](const any& h) -> any {
  //                   return [=](const any& i) -> any {
  //                     return [=](const any& j) -> any {
  //                       return fn(a)(b)(c)(d)(e)(f)(g)(h)(i)(j);
  //                     };
  //                   };
  //                 };
  //               };
  //             };
  //           };
  //         };
  //       };
  //     };
  //   };
  // }

} // namespace Data_Function_Uncurried

#endif // Data_Function_Uncurried_FFI_HH
