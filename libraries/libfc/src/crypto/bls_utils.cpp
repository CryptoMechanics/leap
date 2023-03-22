#include <fc/crypto/bls_utils.hpp>

using namespace bls12_381;

namespace fc { 

  void to_variant(const bls12_381::g1& var, fc::variant& vo, const fc::yield_function_t& yield)
  {
      vo = bytesToHex<144>(var.toJacobianBytesBE());
  }

  void from_variant(const fc::variant& var, bls12_381::g1& vo)
  {
      vo = g1::fromJacobianBytesBE(hexToBytes(var.as_string()));
  }

  void to_variant(const bls12_381::g2& var, fc::variant& vo, const fc::yield_function_t& yield)
  {
      vo = bytesToHex<288>(var.toJacobianBytesBE());
  }

  void from_variant(const fc::variant& var, bls12_381::g2& vo)
  {
      vo = g2::fromJacobianBytesBE(hexToBytes(var.as_string()));
  }

  void to_variant(const bls12_381::fp& var, fc::variant& vo, const fc::yield_function_t& yield)
  {
      vo = bytesToHex<48>(var.toBytesBE());
  }

  void from_variant(const fc::variant& var, bls12_381::fp& vo)
  {
      vo = fp::fromBytesBE(hexToBytes(var.as_string()));
  }

  void to_variant(const bls12_381::fp2& var, fc::variant& vo, const fc::yield_function_t& yield)
  {
      vo = bytesToHex<96>(var.toBytesBE());
  }

  void from_variant(const fc::variant& var, bls12_381::fp2& vo)
  {
      vo = fp2::fromBytesBE(hexToBytes(var.as_string()));
  }

  void to_variant(const bls12_381::fp6& var, fc::variant& vo, const fc::yield_function_t& yield)
  {
      vo = bytesToHex<288>(var.toBytesBE());
  }

  void from_variant(const fc::variant& var, bls12_381::fp6& vo)
  {
      vo = fp6::fromBytesBE(hexToBytes(var.as_string()));
  }

  void to_variant(const bls12_381::fp12& var, fc::variant& vo, const fc::yield_function_t& yield)
  {
      vo = bytesToHex<576>(var.toBytesBE());
  }

  void from_variant(const fc::variant& var, bls12_381::fp12& vo)
  {
      vo = fp12::fromBytesBE(hexToBytes(var.as_string()));
  }
}
